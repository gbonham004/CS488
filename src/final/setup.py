from setuptools import find_packages, setup

package_name = 'final'

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
    maintainer='gbonham',
    maintainer_email='gbonham04@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'color_vision = final.color_vision:main',
            "get_obs=final.get_obstacles:main",
            "go_to_goal=final.nav:main",
            "goal_client=final.goal_client:main",
            "nav_pf=final.nav_pf:main"
        ],
    },
)
