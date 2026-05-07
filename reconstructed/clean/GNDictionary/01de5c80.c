// Function: FUN_01de5c80
// Address: 01de5c80
// Size: 1476 bytes
// Class: GNDictionary

void FUN_01de5c80(uint64_t param_1,uint32_t param_2,uint64_t param_3)

{
  int iVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  char cVar4;
  int64_t lVar5;
  char unaff_SIL;
  int64_t *this_ptr;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  float fVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar11 [16];
  uint32_t uVar12;
  uint32_t in_XMM2_Dc;
  uint32_t in_XMM2_Dd;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  uint32_t local_9c;
  uint64_t local_98;
  uint64_t uStack_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  uVar12 = (uint32_t)((uint64_t)param_3 >> 0x20);
  if ((int)this_ptr[0x50] == 0) {
    local_9c = param_2;
    if (unaff_SIL == '\0') {
      if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
        auVar11._0_8_ = FUN_01dd38e0();
        auVar11._8_8_ = extraout_XMM0_Qb;
        fVar9 = (float)(int)this_ptr[0x30] *
                (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
      }
      else {
        iVar6 = 0;
        FUN_00c8e340();
        FUN_00c8e7d0();
        if ((int)this_ptr[0x30] < 1) {
          local_98 = 0;
          uStack_90 = 0;
        }
        else {
          local_98 = 0;
          uStack_90 = 0;
          do {
            fVar9 = (float)FUN_01de5aa0();
            local_98 = CONCAT44(local_98._4_4_,
                                (float)local_98 + fVar9 + *(float *)((int64_t)this_ptr + 0x174));
            lVar5 = this_ptr[0x52];
            iVar1 = *(int *)(lVar5 + 0x18);
            FUN_00c8e340();
            *(float *)(*(int64_t *)(lVar5 + 0x10) + (int64_t)iVar1) = (float)local_98;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)this_ptr[0x30]);
        }
        auVar11._0_8_ = FUN_01dd38e0();
        auVar11._8_8_ = extraout_XMM0_Qb_00;
        fVar9 = (float)local_98;
        uVar12 = local_98._4_4_;
        in_XMM2_Dc = (uint32_t)uStack_90;
        in_XMM2_Dd = uStack_90._4_4_;
      }
      auVar3._4_4_ = uVar12;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = in_XMM2_Dc;
      auVar3._12_4_ = in_XMM2_Dd;
      auVar11 = insertps(auVar11,auVar3,0x10);
      (**(code **)(*this_ptr + 0x4e8))(auVar11._0_8_);
    }
    if (((char)this_ptr[0x4f] != '\0') && (local_98 = FUN_01e436c0(), 0 < (int)this_ptr[0x30])) {
      uVar8 = 0;
      do {
        FUN_01dcf710();
        cVar4 = FUN_00d054a0();
        lVar5 = this_ptr[0x2c];
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
              lVar5 = (int64_t)(int)local_50;
              iVar6 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar6);
              if (*(int *)(local_58 + 0xc) <= iVar6) break;
              local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
              plVar2 = *(int64_t **)
                        (*(int64_t *)
                          (*(int64_t *)
                            (*(int64_t *)(this_ptr[0x51] + 0x10) +
                            ((int64_t)iVar6 + (int64_t)local_48) * 8) + 0x10) + uVar8 * 8);
              if (g_028b8a88 != plVar2) {
                (**(code **)(*this_ptr + 0x950))();
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
            lVar5 = (int64_t)(int)local_50;
            iVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            if (*(int *)(local_58 + 0xc) <= iVar6) break;
            local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
            uVar7 = (int64_t)iVar6 + (int64_t)local_48;
            lVar5 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr[0x51] + 0x10) + uVar7 * 8) + 0x10);
            plVar2 = *(int64_t **)(lVar5 + uVar8 * 8);
            if (g_028b8a88 == plVar2) {
              local_b8 = '\0';
              local_c0 = local_68;
              uVar10 = (**(code **)(*this_ptr + 0xa18))(&local_c0,uVar8 & 0xffffffff);
              plVar2 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0'))
                   && (local_40 != (int64_t *)0x0)) {
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
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                uVar10 = FUN_00d50b20();
              }
              (**(code **)(*this_ptr + 0x950))(uVar10,uVar7 & 0xffffffff);
              (**(code **)(*plVar2 + 0x4d0))();
              local_b0 = plVar2;
              local_a8 = '\0';
              (**(code **)(*this_ptr + 0x918))();
              if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*this_ptr + 0xa08))(uVar7 & 0xffffffff,uVar8 & 0xffffffff);
              local_88 = local_40;
              local_80 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_80 = '\x01';
              (**(code **)(*plVar2 + 0x978))();
              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            else {
              (**(code **)(*this_ptr + 0x950))(lVar5,uVar7 & 0xffffffff);
              (**(code **)(*plVar2 + 0x4d0))();
              if ((char)local_9c == '\0') {
                (**(code **)(*this_ptr + 0xa08))(uVar7 & 0xffffffff,uVar8 & 0xffffffff);
                local_78 = local_40;
                local_70 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_70 = '\x01';
                (**(code **)(*plVar2 + 0x978))();
                if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
LAB_01de5e20:
          FUN_01de6a30();
        }
        uVar8 = uVar8 + 1;
      } while ((int64_t)uVar8 < (int64_t)(int)this_ptr[0x30]);
    }
  }
  return;
}

