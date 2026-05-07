// Function: FUN_01de5c80
// Address: 01de5c80
// Size: 1476 bytes
// Class: GNDictionary


void FUN_01de5c80(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  char unaff_SIL;
  longlong *unaff_RDI;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  uVar12 = (undefined4)((ulonglong)param_3 >> 0x20);
  if ((int)unaff_RDI[0x50] == 0) {
    local_9c = param_2;
    if (unaff_SIL == '\0') {
      if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
        auVar11._0_8_ = FUN_01dd38e0();
        auVar11._8_8_ = extraout_XMM0_Qb;
        fVar9 = (float)(int)unaff_RDI[0x30] *
                (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
      }
      else {
        iVar6 = 0;
        FUN_00c8e340();
        FUN_00c8e7d0();
        if ((int)unaff_RDI[0x30] < 1) {
          local_98 = 0;
          uStack_90 = 0;
        }
        else {
          local_98 = 0;
          uStack_90 = 0;
          do {
            fVar9 = (float)FUN_01de5aa0();
            local_98 = CONCAT44(local_98._4_4_,
                                (float)local_98 + fVar9 + *(float *)((longlong)unaff_RDI + 0x174));
            lVar5 = unaff_RDI[0x52];
            iVar1 = *(int *)(lVar5 + 0x18);
            FUN_00c8e340();
            *(float *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar1) = (float)local_98;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)unaff_RDI[0x30]);
        }
        auVar11._0_8_ = FUN_01dd38e0();
        auVar11._8_8_ = extraout_XMM0_Qb_00;
        fVar9 = (float)local_98;
        uVar12 = local_98._4_4_;
        in_XMM2_Dc = (undefined4)uStack_90;
        in_XMM2_Dd = uStack_90._4_4_;
      }
      auVar3._4_4_ = uVar12;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = in_XMM2_Dc;
      auVar3._12_4_ = in_XMM2_Dd;
      auVar11 = insertps(auVar11,auVar3,0x10);
      (**(code **)(*unaff_RDI + 0x4e8))(auVar11._0_8_);
    }
    if (((char)unaff_RDI[0x4f] != '\0') && (local_98 = FUN_01e436c0(), 0 < (int)unaff_RDI[0x30])) {
      uVar8 = 0;
      do {
        FUN_01dcf710();
        cVar4 = FUN_00d054a0();
        lVar5 = unaff_RDI[0x2c];
        if (cVar4 == '\0') {
          if (lVar5 != 0) {
            local_60 = 0;
            local_68 = 0;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            local_58 = lVar5;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar6 = -local_50._4_4_;
                }
                else {
                  iVar6 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar6);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar6 = 0;
                }
                local_50 = CONCAT44(iVar6,(int)local_50);
              }
              lVar5 = (longlong)(int)local_50;
              iVar6 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar6);
              if (*(int *)(local_58 + 0xc) <= iVar6) break;
              local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
              plVar2 = *(longlong **)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(unaff_RDI[0x51] + 0x10) +
                            ((longlong)iVar6 + (longlong)local_48) * 8) + 0x10) + uVar8 * 8);
              if (DAT_028b8a88 != plVar2) {
                (**(code **)(*unaff_RDI + 0x950))();
                (**(code **)(*plVar2 + 0x4d0))();
              }
            }
            goto LAB_01de5e20;
          }
        }
        else if (lVar5 != 0) {
          local_60 = 0;
          local_68 = 0;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
          local_58 = lVar5;
          while( true ) {
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar6 = -local_50._4_4_;
              }
              else {
                iVar6 = (int)local_50 - local_50._4_4_;
                local_50 = CONCAT44(local_50._4_4_,iVar6);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar6 = 0;
              }
              local_50 = CONCAT44(iVar6,(int)local_50);
            }
            lVar5 = (longlong)(int)local_50;
            iVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            if (*(int *)(local_58 + 0xc) <= iVar6) break;
            local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
            uVar7 = (longlong)iVar6 + (longlong)local_48;
            lVar5 = *(longlong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI[0x51] + 0x10) + uVar7 * 8) + 0x10);
            plVar2 = *(longlong **)(lVar5 + uVar8 * 8);
            if (DAT_028b8a88 == plVar2) {
              local_b8 = '\0';
              local_c0 = local_68;
              uVar10 = (**(code **)(*unaff_RDI + 0xa18))(&local_c0,uVar8 & 0xffffffff);
              plVar2 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0'))
                   && (local_40 != (longlong *)0x0)) {
                  uVar10 = FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              local_38 = '\0';
              local_40 = plVar2;
              uVar10 = FUN_00d233f0(uVar10,uVar8 & 0xffffffff);
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                uVar10 = FUN_00d50b20();
              }
              (**(code **)(*unaff_RDI + 0x950))(uVar10,uVar7 & 0xffffffff);
              (**(code **)(*plVar2 + 0x4d0))();
              local_b0 = plVar2;
              local_a8 = '\0';
              (**(code **)(*unaff_RDI + 0x918))();
              if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*unaff_RDI + 0xa08))(uVar7 & 0xffffffff,uVar8 & 0xffffffff);
              local_88 = local_40;
              local_80 = 0;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_80 = '\x01';
              (**(code **)(*plVar2 + 0x978))();
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            else {
              (**(code **)(*unaff_RDI + 0x950))(lVar5,uVar7 & 0xffffffff);
              (**(code **)(*plVar2 + 0x4d0))();
              if ((char)local_9c == '\0') {
                (**(code **)(*unaff_RDI + 0xa08))(uVar7 & 0xffffffff,uVar8 & 0xffffffff);
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
                (**(code **)(*plVar2 + 0x978))();
                if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
LAB_01de5e20:
          FUN_01de6a30();
        }
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < (longlong)(int)unaff_RDI[0x30]);
    }
  }
  return;
}


