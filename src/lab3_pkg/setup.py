from setuptools import find_packages, setup

package_name = 'lab3_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nhu.nguyen@plu.edu',
    maintainer_email='nhunguyen.project@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'SCOD_server = lab3_pkg.lab3_server:main',
            'set_cap_client_node = lab3_pkg.set_cap_client:main'
        ],
    },
)
