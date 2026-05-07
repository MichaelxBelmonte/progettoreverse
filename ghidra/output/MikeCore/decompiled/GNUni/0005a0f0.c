// Function: FUN_0005a0f0
// Address: 0005a0f0
// Size: 512 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "_delegate"
//   "GNRunLoopObserverDelegate"
//   "GNRunLoopObserver"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0005a0f0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_026d56a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_026d5618 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026d5568 = FUN_00d4fe50();
          _DAT_026d5550 = "GNRunLoopObserver";
          _DAT_026d5558 = 0x30;
          _DAT_026d5560 = FUN_00059a10;
          _DAT_026d5570 = 0;
          uRam00000000026d5578 = 0;
          _DAT_026d5580 = 0;
          _DAT_026d55f8 = 0;
          uRam00000000026d5600 = 0;
          _DAT_026d5608 = 0;
          DAT_026d560a = 1;
          _DAT_026d5588 = 0;
          uRam00000000026d5590 = 0;
          _DAT_026d5598 = 0;
          uRam00000000026d55a0 = 0;
          _DAT_026d55a8 = 0;
          uRam00000000026d55b0 = 0;
          _DAT_026d55b8 = 0;
          uRam00000000026d55c0 = 0;
          _DAT_026d55c8 = 0;
          uRam00000000026d55d0 = 0;
          _DAT_026d55d8 = 0;
          uRam00000000026d55e0 = 0;
          _DAT_026d55e8 = 0;
          uRam00000000026d55f0 = 0;
          DAT_026d5613 = 0;
          _DAT_026d560b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_026d5680 = (iVar1 != 0) << 6 | 0x80;
      _DAT_026d5668 = "_delegate";
      _DAT_026d5670 = &DAT_026d5550;
      _DAT_026d5678 = 0;
      _DAT_026d5688 = 0;
      uRam00000000026d5690 = 0;
      _DAT_026d5698 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d56a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d0a20 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02732cb0 = "GNRunLoopObserverDelegate";
          DAT_02732cc0 = 0;
          _DAT_02732cb8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_026d5668;
}


