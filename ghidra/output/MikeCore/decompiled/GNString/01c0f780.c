// Function: FUN_01c0f780
// Address: 01c0f780
// Size: 1009 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c0fb27) */
/* WARNING: Removing unreachable block (ram,0x01c0fb33) */

ulonglong FUN_01c0f780(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  undefined8 unaff_R13;
  ulonglong uVar7;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  if ((((longlong *)*unaff_RSI != (longlong *)0x0) &&
      (cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x3d8))(), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(), cVar2 == '\0')) {
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x4c0))();
    if (cVar2 == '\0') {
      plVar5 = (longlong *)*unaff_RSI;
    }
    else {
      if (*(char *)(unaff_RDI + 0x2c) == '\0') goto LAB_01c0f7bf;
      (**(code **)(*(longlong *)*unaff_RSI + 0x4c8))();
      plVar1 = local_80;
      plVar5 = (longlong *)*unaff_RSI;
      if (plVar5 == local_80) {
        if (((char)unaff_RSI[1] != '\0') || (local_80 == (longlong *)0x0)) goto LAB_01c0f88e;
        local_38 = unaff_RSI + 1;
        if (local_78 == '\0') {
          FUN_00d50b00();
          goto LAB_01c0f887;
        }
LAB_01c0f852:
        *(undefined1 *)local_38 = 1;
      }
      else {
        local_38 = unaff_RSI + 1;
        cVar2 = (char)unaff_RSI[1];
        unaff_R13 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),cVar2);
        if (local_78 != '\0') {
          *unaff_RSI = (longlong)local_80;
          if ((cVar2 != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c0f852;
        }
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar1;
        if ((cVar2 != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01c0f887:
        *(undefined1 *)local_38 = 1;
LAB_01c0f88e:
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar5 = (longlong *)*unaff_RSI;
      if (plVar5 == (longlong *)0x0) goto LAB_01c0f7bf;
    }
    cVar2 = (**(code **)(*plVar5 + 0x3a0))();
    uVar7 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
    if (cVar2 != '\0') goto LAB_01c0f7c2;
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
    if (cVar2 != '\0') {
      FUN_01c0e5e0();
      local_38 = (longlong *)local_58;
      (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
      plVar5 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = plVar5;
      local_78 = '\0';
      cVar2 = FUN_00d23d70();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') goto LAB_01c0f7c2;
      local_70 = *param_2;
      if (local_70 != 0) {
        local_78 = 0;
        local_80 = (longlong *)0x0;
        local_60 = 0;
        local_68 = 0;
        if (0 < *(int *)(local_70 + 0xc)) {
          lVar6 = 0;
          local_38 = (longlong *)local_70;
          do {
            plVar5 = *(longlong **)(*(longlong *)((longlong)local_38 + 0x10) + lVar6 * 8);
            local_80 = plVar5;
            FUN_01c28c50();
            pplVar4 = (longlong **)&DAT_02802688;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x360))();
              cVar2 = FUN_00e85ea0();
              pplVar4 = &local_80;
              if (cVar2 == '\0') {
                pplVar4 = (longlong **)&DAT_02802688;
              }
            }
            if (*(char *)(pplVar4 + 1) == '\0') {
              if (*pplVar4 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_01c0fa3d;
              }
            }
            else {
              *(undefined1 *)(pplVar4 + 1) = 0;
              if (*pplVar4 != (longlong *)0x0) {
LAB_01c0fa3d:
                FUN_01c10db0();
                (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
                if (local_88 == '\0') {
                  if (local_90 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_88 = '\0';
                }
                local_58 = local_90;
                local_50 = '\0';
                cVar2 = FUN_00d23d70();
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
                if (local_90 != 0) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar2 != '\0') {
                  iVar3 = FUN_00b84c70();
                  uVar7 = CONCAT71((int7)(uVar7 >> 8),iVar3 != 1 || (int)local_58 == 0);
                }
                FUN_00d50b20();
                if (cVar2 != '\0') {
                  FUN_01c10620();
                  goto LAB_01c0f7c2;
                }
              }
            }
            lVar6 = lVar6 + 1;
            local_68 = CONCAT44(local_68._4_4_,(int)lVar6);
          } while ((int)lVar6 < *(int *)((longlong)local_38 + 0xc));
        }
        FUN_01c10620();
      }
    }
  }
LAB_01c0f7bf:
  uVar7 = 0;
LAB_01c0f7c2:
  return uVar7 & 0xffffff01;
}


