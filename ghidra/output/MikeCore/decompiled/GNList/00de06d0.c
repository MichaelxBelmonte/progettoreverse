// Function: FUN_00de06d0
// Address: 00de06d0
// Size: 1459 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00de06d0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar4 = *(longlong **)(unaff_RSI + 0x20);
  if ((*(longlong **)(unaff_RSI + 0x20) == (longlong *)0x0) &&
     ((DAT_028a8700 == (longlong *)0x0 || (plVar4 = DAT_028a8700, DAT_028a8709 == '\0')))) {
    FUN_00e8cb50();
    if (DAT_028a8700 == (longlong *)0x0) {
      uVar9 = FUN_00d30620();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
          goto LAB_00de078f;
        }
      }
      else if (local_40 != (longlong *)0x0) {
LAB_00de078f:
        lVar1 = DAT_027841a8;
        if (DAT_027841a8 != 0) {
          uVar9 = FUN_00d50b00();
        }
        local_50 = lVar1;
        local_48 = '\x01';
        FUN_00d31060(uVar9,&local_50);
        plVar4 = local_40;
        if ((DAT_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_026cd478 = FUN_00d4fe50();
          DAT_026cd460 = "GNList";
          _DAT_026cd468 = 0x20;
          _DAT_026cd470 = FUN_00018210;
          _DAT_026cd480 = 0;
          uRam00000000026cd488 = 0;
          _DAT_026cd490 = 0;
          _DAT_026cd508 = 0;
          uRam00000000026cd510 = 0;
          _DAT_026cd518 = 0;
          DAT_026cd51a = 6;
          _DAT_026cd498 = 0;
          uRam00000000026cd4a0 = 0;
          _DAT_026cd4a8 = 0;
          uRam00000000026cd4b0 = 0;
          _DAT_026cd4b8 = 0;
          uRam00000000026cd4c0 = 0;
          _DAT_026cd4c8 = 0;
          uRam00000000026cd4d0 = 0;
          _DAT_026cd4d8 = 0;
          uRam00000000026cd4e0 = 0;
          _DAT_026cd4e8 = 0;
          uRam00000000026cd4f0 = 0;
          _DAT_026cd4f8 = 0;
          uRam00000000026cd500 = 0;
          DAT_026cd523 = 0;
          _DAT_026cd51b = 0;
          ___cxa_guard_release();
        }
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 != '\0') {
            if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
              _DAT_026d5e58 = FUN_00d4fe50();
              DAT_026d5e40 = "GNString";
              _DAT_026d5e48 = 0x40;
              _DAT_026d5e50 = FUN_0005d920;
              _DAT_026d5e60 = 0;
              uRam00000000026d5e68 = 0;
              _DAT_026d5e70 = 0;
              uRam00000000026d5e78 = 0;
              _DAT_026d5e80 = 0;
              uRam00000000026d5e88 = 0;
              _DAT_026d5e90 = 0;
              uRam00000000026d5e98 = 0;
              _DAT_026d5ea0 = 0;
              uRam00000000026d5ea8 = 0;
              _DAT_026d5eb0 = 0;
              uRam00000000026d5eb8 = 0;
              _DAT_026d5ec0 = 0;
              uRam00000000026d5ec8 = 0;
              _DAT_026d5ed0 = 0;
              uRam00000000026d5ed8 = 0;
              _DAT_026d5ee0 = 0;
              uRam00000000026d5ee8 = 0;
              _DAT_026d5ef0 = 0;
              uRam00000000026d5ef8 = 0;
              _DAT_026d5f00 = 0;
              ___cxa_guard_release();
            }
            cVar2 = FUN_00e8da30();
            pplVar6 = &local_40;
            if (cVar2 == '\0') {
              pplVar6 = (longlong **)&DAT_02802688;
            }
          }
        }
        plVar4 = *pplVar6;
        plVar5 = DAT_028a8700;
        if (DAT_028a8700 != plVar4) {
          if (*(char *)(pplVar6 + 1) == '\0') {
            if (plVar4 == (longlong *)0x0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar5 = *pplVar6;
            }
          }
          else {
            *(undefined1 *)(pplVar6 + 1) = 0;
            plVar5 = plVar4;
          }
          bVar7 = DAT_028a8700 != (longlong *)0x0;
          DAT_028a8700 = plVar5;
          if (bVar7) {
            FUN_00d50b20();
            plVar5 = *pplVar6;
          }
        }
        if ((plVar5 != (longlong *)0x0) && (DAT_028a8708 == '\0')) {
          DAT_028a8708 = '\x01';
          FUN_00e8cb90();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (DAT_028a8700 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar4 = (longlong)&DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a8700 == plVar4) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
          bVar8 = DAT_028a8700 != (longlong *)0x0;
          DAT_028a8700 = plVar4;
          if (bVar8) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a8708 == '\0') {
          DAT_028a8708 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar7) {
          FUN_00d50b20();
        }
        plVar4 = DAT_02772f68;
        if (DAT_02772f68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = DAT_027841b0;
        if (DAT_027841b0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = DAT_027841b8;
        if (DAT_027841b8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = DAT_027841c0;
        if (DAT_027841c0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = DAT_02772f60;
        if (DAT_02772f60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      DAT_028a8709 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a8709 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = DAT_028a8700;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_00de0713;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00de0713:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


