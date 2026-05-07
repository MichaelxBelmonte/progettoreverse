// Function: FUN_0098c45c
// Address: 0098c45c
// Size: 1087 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/Cocoa.framework/Versions/A/Cocoa"
//   ", "
//   "\n"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Certifier.cpp"
//   "Invalid publisher ID (0x%08X)."
//   "bool pace::Certifier::participantsAreValid(const std::set<uint32_t> *, std::ostream *)"
//   "Invalid Participant ID (0x%08X)."
//   "Error detected in Certifier::participantsAreValid().\nin_pAuthParticipantIds set content:\n"
//   "}\n"
//   "limitedParticipantIds set content:\n"
//   "Error was detected for in_pAuthParticipantIds member with value: "


/* WARNING: Removing unreachable block (ram,0x0098c5f9) */
/* WARNING: Removing unreachable block (ram,0x0098c5ff) */
/* WARNING: Removing unreachable block (ram,0x0098c604) */
/* WARNING: Removing unreachable block (ram,0x0098c61a) */
/* WARNING: Removing unreachable block (ram,0x0098c623) */
/* WARNING: Removing unreachable block (ram,0x0098c627) */
/* WARNING: Removing unreachable block (ram,0x0098c60d) */
/* WARNING: Removing unreachable block (ram,0x0098c618) */
/* WARNING: Removing unreachable block (ram,0x0098c637) */
/* WARNING: Removing unreachable block (ram,0x0098c63f) */
/* WARNING: Removing unreachable block (ram,0x0098c641) */
/* WARNING: Removing unreachable block (ram,0x0098c657) */
/* WARNING: Removing unreachable block (ram,0x0098c660) */
/* WARNING: Removing unreachable block (ram,0x0098c664) */
/* WARNING: Removing unreachable block (ram,0x0098c64a) */
/* WARNING: Removing unreachable block (ram,0x0098c655) */
/* WARNING: Removing unreachable block (ram,0x0098c674) */
/* WARNING: Removing unreachable block (ram,0x0098c7aa) */
/* WARNING: Removing unreachable block (ram,0x0098c7bb) */
/* WARNING: Removing unreachable block (ram,0x0098c7c0) */
/* WARNING: Removing unreachable block (ram,0x0098c7d6) */
/* WARNING: Removing unreachable block (ram,0x0098c7e6) */
/* WARNING: Removing unreachable block (ram,0x0098c807) */
/* WARNING: Removing unreachable block (ram,0x0098c810) */
/* WARNING: Removing unreachable block (ram,0x0098c814) */
/* WARNING: Removing unreachable block (ram,0x0098c7fa) */
/* WARNING: Removing unreachable block (ram,0x0098c805) */
/* WARNING: Removing unreachable block (ram,0x0098c824) */

undefined8 FUN_0098c45c(undefined8 param_1,longlong param_2)

{
  ostream *poVar1;
  ostream *poVar2;
  ostream *poVar3;
  ostream *poVar4;
  uint uVar5;
  undefined8 uVar6;
  ostream *poVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar8;
  undefined8 local_48;
  longlong local_40;
  int iStack_34;
  
  if (unaff_RSI == (longlong *)0x0) {
    return 1;
  }
  poVar4 = (ostream *)&local_48;
  local_40 = 0;
  local_48 = 0;
  FUN_00991fd4();
  if (local_40 == 0) {
    if (*(int *)(unaff_RDI + 0xaf0) != 4) goto LAB_0098c681;
    iStack_34 = FUN_0099231c();
    if (iStack_34 + 1U < 2) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("bool pace::Certifier::participantsAreValid(const std::set<uint32_t> *, std::ostream *)"
                   ,0x1c0);
      FUN_009c720b();
    }
    FUN_009518bc();
  }
  poVar1 = (ostream *)*unaff_RSI;
  poVar2 = (ostream *)(unaff_RSI + 1);
  if (poVar1 != poVar2) {
    if (*(int *)(poVar1 + 0x1c) + 1U < 2) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("bool pace::Certifier::participantsAreValid(const std::set<uint32_t> *, std::ostream *)"
                   ,0x1eb);
      FUN_009c720b();
    }
    if (param_2 != 0) {
      FUN_009ad920(poVar4,0x59);
      uVar6 = 1;
      FUN_009ad920();
      if ((ostream *)*unaff_RSI != poVar2) {
        uVar8 = 0;
        poVar7 = (ostream *)*unaff_RSI;
        do {
          if (uVar8 != 0) {
            uVar6 = 2;
            FUN_009ad920();
            if ((uVar8 & 7) == 0) {
              uVar6 = 1;
              FUN_009ad920();
            }
          }
          std::ostream::operator<<(poVar4,(uint)uVar6);
          poVar4 = *(ostream **)(poVar7 + 8);
          if (*(ostream **)(poVar7 + 8) == (ostream *)0x0) {
            poVar3 = *(ostream **)(poVar7 + 0x10);
            poVar4 = (ostream *)0x0;
            if (*(ostream **)poVar3 != poVar7) {
              do {
                poVar4 = *(ostream **)(poVar7 + 0x10);
                poVar3 = *(ostream **)(poVar4 + 0x10);
                poVar7 = poVar4;
              } while (*(ostream **)poVar3 != poVar4);
            }
          }
          else {
            do {
              poVar3 = poVar4;
              poVar4 = *(ostream **)poVar3;
            } while (*(ostream **)poVar3 != (ostream *)0x0);
            poVar4 = (ostream *)0x0;
          }
          uVar8 = uVar8 + 1;
          poVar7 = poVar3;
        } while (poVar3 != poVar2);
      }
      FUN_009ad920();
      FUN_009ad920();
      FUN_009ad920();
      FUN_009ad920();
      uVar5 = 0x41;
      FUN_009ad920();
      std::ostream::operator<<(poVar1 + 0x1c,uVar5);
      FUN_009ad920();
    }
    FUN_00992e70();
    return 0;
  }
LAB_0098c681:
  FUN_00992e70();
  return 1;
}


