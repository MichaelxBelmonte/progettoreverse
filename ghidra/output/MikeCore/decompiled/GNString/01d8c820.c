// Function: FUN_01d8c820
// Address: 01d8c820
// Size: 913 bytes
// Class: GNString


ulonglong FUN_01d8c820(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar7;
  undefined8 unaff_R12;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  plVar6 = *(longlong **)(unaff_RDI + 0x148);
  if (plVar6 == (longlong *)*unaff_RSI) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  }
  else {
    iVar7 = -10;
    bVar2 = false;
    plVar9 = (longlong *)0x0;
    do {
      if (plVar6 == plVar9) {
        plVar1 = plVar9;
        bVar3 = bVar2;
        if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        plVar1 = plVar6;
        if ((bVar2) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar3;
      plVar9 = plVar1;
      if (plVar9 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar9 + 0x380))();
        if (cVar5 == '\0') {
          uVar8 = 0;
          goto joined_r0x01d8cbad;
        }
        FUN_00d403d0();
        lVar4 = DAT_027f1660;
        if (DAT_027f1660 != 0) {
          FUN_00d50b00();
        }
        local_90 = '\0';
        local_88 = 0;
        local_80 = '\0';
        local_98 = plVar9;
        FUN_00d40470(&local_88,&local_98,1,3);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar7 = iVar7 + 1;
    } while ((iVar7 != 0) && (plVar6 = *(longlong **)(unaff_RDI + 0x148), plVar6 != plVar9));
    plVar6 = (longlong *)*unaff_RSI;
    *(longlong **)(unaff_RDI + 0x148) = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x378))();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    if ((*(longlong **)(unaff_RDI + 0x148) != (longlong *)0x0) &&
       (cVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0x398))(), cVar5 != '\0')) {
      plVar6 = *(longlong **)(unaff_RDI + 0x148);
      plVar1 = *(longlong **)(unaff_RDI + 0x150);
      if (plVar1 != plVar6) {
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x390))();
        }
        *(longlong **)(unaff_RDI + 0x150) = plVar6;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x388))();
        }
      }
    }
    if ((*(longlong *)(unaff_RDI + 0x18) != 0) && (cVar5 = FUN_01e5c8a0(), cVar5 == '\0')) {
      FUN_01f27fe0();
      (**(code **)(*local_48 + 0x650))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar8 = CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
    if (*(longlong *)(unaff_RDI + 0x148) != 0) {
      FUN_00d403d0();
      local_78 = DAT_027f0e30;
      if (DAT_027f0e30 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_68 = *(longlong *)(unaff_RDI + 0x148);
      local_60 = '\0';
      local_58 = 0;
      local_50 = '\0';
      FUN_00d40470(&local_58,&local_68,1,3);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
joined_r0x01d8cbad:
    if ((bVar2) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return uVar8 & 0xffffffff;
}


