// Function: FUN_01e56f90
// Address: 01e56f90
// Size: 586 bytes
// Class: GNStringTable
// String references:
//   "GNStringTable"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e56f90(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0x50) == 0) {
LAB_01e571b6:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar5 = 0;
    while( true ) {
      FUN_00ca1380();
      local_48 = (longlong *)CONCAT71(local_48._1_7_,(char)local_50);
      pplVar4 = &local_50;
      if ((char)local_50 == '\0') {
        pplVar4 = &local_48;
      }
      *(undefined1 *)pplVar4 = 0;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = *(int *)(local_58 + 0xc);
      if ((char)local_48 != '\0') {
        FUN_00d50b20();
      }
      if (iVar3 <= lVar5) goto LAB_01e571b6;
      FUN_00ca1380();
      local_38[0] = (char)local_50;
      pplVar4 = &local_50;
      if ((char)local_50 == '\0') {
        pplVar4 = (longlong **)local_38;
      }
      *(undefined1 *)pplVar4 = 0;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      plVar1 = *(longlong **)(*(longlong *)(local_58 + 0x10) + lVar5 * 8);
      local_48 = plVar1;
      local_40 = '\0';
      if (DAT_026d6328 == '\0') {
        iVar3 = ___cxa_guard_acquire();
        if (iVar3 != 0) {
          _DAT_026d6278 = FUN_00d4fe50();
          _DAT_026d6260 = "GNStringTable";
          _DAT_026d6268 = 0x28;
          _DAT_026d6270 = FUN_0005eaf0;
          _DAT_026d6280 = 0;
          uRam00000000026d6288 = 0;
          _DAT_026d6290 = 0;
          uRam00000000026d6298 = 0;
          _DAT_026d62a0 = 0;
          uRam00000000026d62a8 = 0;
          _DAT_026d62b0 = 0;
          uRam00000000026d62b8 = 0;
          _DAT_026d62c0 = 0;
          uRam00000000026d62c8 = 0;
          _DAT_026d62d0 = 0;
          uRam00000000026d62d8 = 0;
          _DAT_026d62e0 = 0;
          uRam00000000026d62e8 = 0;
          _DAT_026d62f0 = 0;
          uRam00000000026d62f8 = 0;
          _DAT_026d6300 = 0;
          uRam00000000026d6308 = 0;
          _DAT_026d6310 = 0;
          uRam00000000026d6318 = 0;
          _DAT_026d6320 = 0;
          ___cxa_guard_release();
        }
      }
      pplVar4 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_48;
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
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) break;
      lVar5 = lVar5 + 1;
    }
    *unaff_RDI = (longlong)plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


