#! /usr/bin/env python

###############################################################################
# __init__.py
#
# initialization for the mass_spring_damper_continuous OpenAI environment
#
# NOTE: Any plotting is set up for output, not viewing on screen.
#       So, it will likely be ugly on screen. The saved PDFs should look
#       better.
#
# Created: 04/08/18
#   - Joshua Vaughan
#   - joshua.vaughan@louisiana.edu
#   - http://www.ucs.louisiana.edu/~jev9637
#
# Modified:
#   * 
#
# TODO:
#   * 
###############################################################################

from gym.envs.registration import register

register(
    id='mass_spring_damper_continuous-v0',
    entry_point='mass_spring_damper_continuous.mass_spring_damper_continuous:MassSpringDamperContEnv',
)