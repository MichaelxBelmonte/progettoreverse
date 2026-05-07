// Function: FUN_01a36f10
// Address: 01a36f10
// Size: 1537 bytes
// Class: MUScalePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a36f10(undefined8 param_1,float *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  char local_d0;
  undefined4 local_c4;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (*(char *)(unaff_RDI + 0x1ad) != '\0') {
    if ((DAT_028b2b68 == (longlong *)0x0) || (DAT_028b2b71 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b2b68 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_001b9f00();
        (**(code **)(*plVar4 + 0x18))();
        if (DAT_028b2b68 == plVar4) {
          bVar8 = false;
          bVar2 = false;
        }
        else {
          bVar8 = true;
          bVar2 = true;
          bVar7 = DAT_028b2b68 != (longlong *)0x0;
          DAT_028b2b68 = plVar4;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b2b70 == '\0') {
          DAT_028b2b70 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar8;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_01cfc6a0();
        local_d8 = 0;
        FUN_01cfc6a0();
        local_4c = 0x3dcccccd;
        FUN_01cfc6a0();
        local_48 = 0x3f666666;
        FUN_01cfc6a0();
        local_44 = 0x3f800000;
        FUN_01ae52c0(&local_70,&local_d8,&local_4c,&local_60);
        FUN_01f7ba60();
        FUN_019fe220();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_38 != '\0') && (CONCAT44(fStack_3c,local_40) != 0)) {
          FUN_00d50b20();
        }
        DAT_028b2b71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b2b71 = '\x01';
        FUN_00e8cb70();
      }
    }
    plVar3 = DAT_028b2b68;
    auVar11 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)((uint)(*param_2 + DAT_02390d00) & _DAT_023945e0 |
                                            DAT_02394dc8) + *param_2 + DAT_02390d00)),0xb);
    local_40 = auVar11._0_4_;
    fStack_3c = 0.0;
    uStack_34 = *(undefined4 *)(unaff_RDI + 0x118);
    auVar11 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)(_DAT_023945e0 & (uint)(param_2[2] + DAT_02390d34) |
                                            DAT_02394dc8) + param_2[2] + DAT_02390d34)),0xb);
    local_38 = auVar11._0_4_;
    lVar1 = *(longlong *)(unaff_RDI + 0x158);
    plVar4 = (longlong *)*unaff_RSI;
    uVar9 = auVar11._0_8_;
    if (lVar1 == 0) {
      local_b0 = 0;
      if (DAT_028b2b68 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_b8 = plVar3;
      local_b0 = '\x01';
      (**(code **)(*plVar4 + 0x420))(uVar9,&local_b8);
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_a0 = 0;
      FUN_00d50b00();
      local_a0 = '\x01';
      local_a8 = lVar1;
      FUN_01d488d0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))
                (CONCAT44(fStack_3c,local_40),CONCAT44(uStack_34,local_38));
    }
    if (1 < *(int *)(*(longlong *)(unaff_RDI + 0x188) + 0xc)) {
      if ((DAT_028b2b78 == (longlong *)0x0) || (DAT_028b2b81 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028b2b78 == (longlong *)0x0) {
          plVar4 = (longlong *)FUN_00e8fc40();
          FUN_001b9f00();
          (**(code **)(*plVar4 + 0x18))();
          if (DAT_028b2b78 == plVar4) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            bVar8 = DAT_028b2b78 != (longlong *)0x0;
            DAT_028b2b78 = plVar4;
            if (bVar8) {
              FUN_00d50b20();
            }
          }
          if (DAT_028b2b80 == '\0') {
            DAT_028b2b80 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_01cfc6a0();
          local_4c = 0;
          FUN_01cfc6a0();
          local_48 = 0x3f000000;
          FUN_01cfc6a0();
          local_44 = 0x3f000000;
          FUN_01cfc6a0();
          local_c4 = 0x3f800000;
          FUN_01ae52c0(&local_60,&local_4c,&local_48,&local_80);
          FUN_01f7ba60();
          FUN_019fe220();
          if ((local_d0 != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          DAT_028b2b81 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b2b81 = '\x01';
          FUN_00e8cb70();
        }
      }
      uStack_34 = 0x41400000;
      if (1 < *(int *)(*(longlong *)(unaff_RDI + 0x188) + 0xc)) {
        iVar5 = 1;
        iVar6 = 0x1a;
        do {
          plVar3 = DAT_028b2b78;
          fStack_3c = (float)iVar6;
          uVar10 = (ulonglong)(uint)fStack_3c;
          plVar4 = (longlong *)*unaff_RSI;
          local_90 = 0;
          if (DAT_028b2b78 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
          }
          local_98 = plVar3;
          local_90 = '\x01';
          (**(code **)(*plVar4 + 0x420))(uVar10,&local_98);
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x20;
        } while (iVar5 < *(int *)(*(longlong *)(unaff_RDI + 0x188) + 0xc));
      }
    }
  }
  return;
}


