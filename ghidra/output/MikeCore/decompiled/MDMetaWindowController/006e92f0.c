// Function: FUN_006e92f0
// Address: 006e92f0
// Size: 758 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x006e9382) */
/* WARNING: Removing unreachable block (ram,0x006e954b) */
/* WARNING: Removing unreachable block (ram,0x006e9558) */
/* WARNING: Removing unreachable block (ram,0x006e9390) */
/* WARNING: Removing unreachable block (ram,0x006e93b0) */
/* WARNING: Removing unreachable block (ram,0x006e9392) */
/* WARNING: Removing unreachable block (ram,0x006e93b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e92f0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  FUN_01e534b0();
  FUN_01f27fe0();
  FUN_01f2fbe0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    local_50 = -1;
    do {
      local_50 = local_50 + 1;
      if (*(int *)(local_68 + 0xc) <= local_50) goto LAB_006e957e;
      FUN_01e5c650();
      plVar1 = local_40;
      if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026e0ab8 = FUN_00015ff0();
        _DAT_026e0aa0 = "MDMetaWindowController";
        _DAT_026e0aa8 = 0x198;
        _DAT_026e0ab0 = FUN_0006dea0;
        _DAT_026e0ac0 = 0;
        uRam00000000026e0ac8 = 0;
        _DAT_026e0ad0 = 0;
        _DAT_026e0b48 = 0;
        uRam00000000026e0b50 = 0;
        _DAT_026e0b58 = 0;
        DAT_026e0b5a = 1;
        _DAT_026e0ad8 = 0;
        uRam00000000026e0ae0 = 0;
        _DAT_026e0ae8 = 0;
        uRam00000000026e0af0 = 0;
        _DAT_026e0af8 = 0;
        uRam00000000026e0b00 = 0;
        _DAT_026e0b08 = 0;
        uRam00000000026e0b10 = 0;
        _DAT_026e0b18 = 0;
        uRam00000000026e0b20 = 0;
        _DAT_026e0b28 = 0;
        uRam00000000026e0b30 = 0;
        _DAT_026e0b38 = 0;
        uRam00000000026e0b40 = 0;
        DAT_026e0b63 = 0;
        _DAT_026e0b5b = 0;
        ___cxa_guard_release();
      }
      pplVar4 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_40;
        if (cVar2 == '\0') {
          pplVar4 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar4 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (plVar1 == (longlong *)0x0);
    FUN_006e87c0();
    FUN_00d50b20();
LAB_006e957e:
    FUN_006e9880();
    FUN_00d50b20();
  }
  FUN_00451120();
  FUN_00451100();
  FUN_00451120();
  FUN_00451100();
  FUN_0044dc30();
  FUN_0044dc30();
  FUN_006e8b70();
  return;
}


