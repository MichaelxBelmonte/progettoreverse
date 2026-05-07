// Function: FUN_01e44a80
// Address: 01e44a80
// Size: 544 bytes
// Class: GNTextView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e44a80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  undefined8 uVar5;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar6;
  float fVar7;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  fStack_74 = (float)((ulonglong)param_1 >> 0x20);
  local_78 = (float)param_1;
  lVar1 = unaff_RDI[7];
  if (lVar1 != 0) {
    fStack_70 = in_XMM0_Dc;
    fStack_6c = in_XMM0_Dd;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
        cVar3 = (**(code **)(*unaff_RDI + 0x7a8))();
        if (cVar3 == '\0') {
          (**(code **)(*plVar2 + 0x4e0))();
          cVar3 = FUN_00d054a0();
          if (cVar3 != '\0') goto LAB_01e44b68;
        }
        else {
LAB_01e44b68:
          uVar5 = (**(code **)(*plVar2 + 0x4d8))();
          fStack_80 = extraout_XMM0_Dc;
          fStack_7c = extraout_XMM0_Dd;
          local_88 = uVar5;
          (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
          (**(code **)(*plVar2 + 0x500))();
          local_78 = local_78 - (float)local_88;
          fStack_74 = fStack_74 - local_88._4_4_;
          fStack_70 = fStack_70 - fStack_80;
          fStack_6c = fStack_6c - fStack_7c;
          uVar5 = FUN_00d05360();
          fStack_90 = fVar6;
          fStack_8c = fVar7;
          local_98 = uVar5;
          if ((DAT_0239424c < fVar6) && (DAT_0239424c < fVar7)) {
            local_58 = '\0';
            local_50 = *unaff_RSI;
            local_48 = '\0';
            local_60 = plVar2;
            (**(code **)(*unaff_RDI + 0x7a0))(&local_98,&local_50);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          cVar3 = (**(code **)(*plVar2 + 0x840))();
          if (cVar3 != '\0') {
            local_40 = *unaff_RSI;
            local_38 = '\0';
            fVar6 = fStack_90;
            (**(code **)(*plVar2 + 0x848))((undefined4)local_98);
            fVar7 = fStack_8c;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
              fVar7 = fStack_8c;
            }
          }
          (**(code **)(*(longlong *)*unaff_RSI + 0x368))((uint)(float)local_88 ^ _DAT_023945e0);
          local_78 = local_78 + (float)local_88;
          fStack_74 = fStack_74 + local_88._4_4_;
          fStack_70 = fStack_70 + fStack_80;
          fStack_6c = fStack_6c + fStack_7c;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9680();
  }
  return;
}


