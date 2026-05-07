// Function: FUN_00ce4220
// Address: 00ce4220
// Size: 2103 bytes
// Class: GNFilePath


ulonglong FUN_00ce4220(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *unaff_R13;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = (**(code **)(*unaff_RDI + 0x398))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*unaff_RDI + 0x3a0))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      if (cVar2 != '\0') {
        plVar1 = (longlong *)*unaff_RSI;
        (**(code **)(*unaff_RDI + 0x388))();
        local_68 = local_40;
        local_60 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_60 = '\x01';
        (**(code **)(*plVar1 + 0x400))(param_1,&local_68);
        plVar6 = local_50;
        plVar1 = (longlong *)*unaff_RSI;
        if (plVar1 == local_50) {
          if (((char)unaff_RSI[1] == '\0') && (local_50 != (longlong *)0x0)) {
            local_58 = unaff_RSI + 1;
            if (local_48 != '\0') goto LAB_00ce4536;
            FUN_00d50b00();
            goto LAB_00ce4761;
          }
LAB_00ce476b:
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = unaff_RSI + 1;
          lVar7 = unaff_RSI[1];
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)plVar6;
            if (((char)lVar7 != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00ce4761:
            *(undefined1 *)local_58 = 1;
            unaff_R13 = unaff_RSI;
            goto LAB_00ce476b;
          }
          *unaff_RSI = (longlong)local_50;
          if (((char)lVar7 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00ce4536:
          *(undefined1 *)local_58 = 1;
          local_48 = '\0';
          unaff_R13 = unaff_RSI;
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((((longlong *)*unaff_RSI != (longlong *)0x0) &&
          (cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))(), cVar2 == '\0')) &&
         ((cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))(), cVar2 != '\0' ||
          (cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x420))(), cVar2 != '\0')))) {
        (**(code **)(*unaff_RDI + 1000))();
        plVar1 = local_50;
        if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar7 = 0;
        do {
          if (*(int *)((longlong)plVar1 + 0xc) <= lVar7) {
            uVar3 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
            goto LAB_00ce48b0;
          }
          unaff_R13 = *(longlong **)(plVar1[2] + lVar7 * 8);
          if (unaff_R13 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_b0 = *unaff_RSI;
          local_a8 = '\0';
          cVar2 = (**(code **)(*unaff_R13 + 0x440))();
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          lVar7 = lVar7 + 1;
        } while (cVar2 != '\0');
        uVar3 = 0;
LAB_00ce48b0:
        FUN_00d50b20();
        goto LAB_00ce49f0;
      }
    }
    uVar3 = 0;
    goto LAB_00ce49f0;
  }
  (**(code **)(*unaff_RDI + 0x4d8))();
  plVar1 = local_50;
  if (((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_48 = '\0';
  local_50 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    FUN_00ccdae0(param_1,&local_50);
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar6 = plVar1;
  if (local_50 == (longlong *)0x0) {
LAB_00ce49cc:
    uVar3 = 0;
  }
  else {
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    if (cVar2 == '\0') {
      (**(code **)(*(longlong *)*unaff_RSI + 0x4e0))();
      plVar6 = local_40;
      plVar4 = plVar1;
      if (plVar1 == local_40) {
LAB_00ce45d9:
        plVar6 = plVar4;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar4 = plVar6;
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00ce45d9;
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (plVar6 == (longlong *)0x0) goto LAB_00ce49c9;
      local_c0 = local_50;
      local_b8 = '\0';
      FUN_00ccdbb0(param_1,&local_c0);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) goto LAB_00ce49cc;
      (**(code **)(*plVar6 + 0x368))();
      uVar3 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar4 = (longlong *)*unaff_RSI;
      (**(code **)(*unaff_RDI + 0x388))();
      local_88 = local_a0;
      local_80 = 0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar4 + 0x400))(param_1,&local_88);
      plVar5 = local_40;
      plVar4 = (longlong *)*unaff_RSI;
      if (plVar4 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
          local_58 = unaff_RSI + 1;
          if (local_38 != '\0') goto LAB_00ce448e;
          FUN_00d50b00();
          goto LAB_00ce469a;
        }
LAB_00ce46a8:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = unaff_RSI + 1;
        lVar7 = unaff_RSI[1];
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)plVar5;
          if (((char)lVar7 != '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00ce469a:
          *(undefined1 *)local_58 = 1;
          goto LAB_00ce46a8;
        }
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar7 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00ce448e:
        *(undefined1 *)local_58 = 1;
        local_38 = '\0';
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((longlong *)*unaff_RSI == (longlong *)0x0) goto LAB_00ce49cc;
      (**(code **)(*(longlong *)*unaff_RSI + 0x4e0))();
      plVar6 = local_40;
      plVar5 = plVar1;
      if (plVar1 == local_40) {
LAB_00ce48c0:
        plVar6 = plVar5;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar5 = plVar6;
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00ce48c0;
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (plVar6 == (longlong *)0x0) {
LAB_00ce49c9:
        plVar6 = (longlong *)0x0;
        goto LAB_00ce49cc;
      }
      local_d0 = local_50;
      local_c8 = '\0';
      FUN_00ccdbb0(param_1,&local_d0);
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) goto LAB_00ce49cc;
      (**(code **)(*plVar6 + 0x368))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x498))();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar3 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      if (plVar1 != (longlong *)0x0) {
        plVar1 = (longlong *)*unaff_RSI;
        (**(code **)(*unaff_RDI + 0x498))();
        local_78 = local_40;
        local_70 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_70 = '\x01';
        (**(code **)(*plVar1 + 0x4a0))();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00ce49f0:
  return uVar3 & 0xffffffff;
}


