# What is Cybersecurity?

The **protection of information systems** from unauthorized access, use, disclosure, disruption, modification, or destruction in order to provide confidentiality, integrity, and availability.

### Triad Components

1. **Confidentiality**

   Access to resources or data must be restricted to only authorized subjects or entities.

   - Methods: Data encryption

2. **Integrity**

   Ensuring consistency and accuracy of data over its entire life cycle — data must not be changed in transit.

   - Methods: Hash values (provided by the author of the downloaded file, compared with the hash value of the downloaded file)

3. **Availability**

   Ensuring that business operations are up and running, firewalls, proxies, computers everything has to be up and running.

   - Methods: Hardware and software maintenance and upgrades; business continuity plans, disaster recovery, redundancies

### Key Terms

The following are to be considered when designing a business continuity plan.

1.  **Vulnerability**

    Flaw, loophole, oversight, or error that can be exploited to violate system security policy.

    e.g. Code that is vulnerable to a [buffer overflow exploit](https://www.geeksforgeeks.org/buffer-overflow-attack-with-example/)

    - _Vulnerability assessment_ is the process of identifying, analysing, and [ranking vulnerabilities](https://www.first.org/cvss/specification-document) — followed by a patch or a fix to prevent a compromise.
    - Many system are shipped to production with security holes and bugs (known _and_ unknown), as well as insecure default settings.
      e.g. Hardware or software with username and password set as `admin`, or `root`.

    [This is a *misconfiguration vulnerability*, as a threat attack can connect to these tech and use those credentials to perform any malicious activity.]

    [How to fix: The sysadmin needs to re-configure the hardware or software username and password, or take necessary actions to fake the vulnerability.]

2.  **Threat**

    Natural or man-made event that has potential to cause negative impact to an organisation.

    - _Security Threats_

      - Human Factors

        - Internal Threats
          [This is where most cyber attacks come from.]

          e.g. Employees, both former and current

        - External Threats

          e.g. Hackers, crackers, viruses, Trojans, worms

      - Natural Factors
        e.g. Natural disasters

3.  **Exploit**

    A defined way to breach the security of an IT system through a vulnerability.

    e.g. Code that is available on the Internet, which can be used to attack a vulnerable application

4.  **Risk**

    Situations involving exposure to danger.

    e.g. Probability of a vulnerability being exploited

### Roles

- Chief Information Security Officer

  A high-level management position responsible for the entire computer security department.

- Information Security Analyst

  A position responsible for:

  - conducting security assessments for organisations,
  - day-to-day analysis of events, alerts, device alarms, and any potentially useful information for identifying threats that can compromise the organisation.

  [These triggers would be collected by a SEM platform; such as when an IPS (Intrusion Prevention System) sends a threat alert to the SEM; in which case the analyst should be able to receive the alert, investigate the events, go to the IPS to understand what triggered it, and follow up with a resolution.]

- Information Security Auditor

  A position responsible for testing the effectiveness of computer information systems (including online systems) to make sure they are up to regulation standards (such as the ISO27001 or ISO27002) and report their findings.

- Penetration Tester

- Digital Forensics Analyst

### Case Studies

1. Clipper Chip
2. Moonlight Maze
3. Solar Sunrise
4. Buckshoot Yankee
5. Desert Storm (cyber-ops)
6. Bosnia Wars (cyber-ops)
