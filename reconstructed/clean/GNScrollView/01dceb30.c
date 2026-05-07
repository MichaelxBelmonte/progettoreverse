// Function: FUN_01dceb30
// Address: 01dceb30
// Size: 2004 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dceb30(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t **pplVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  bool bVar9;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int local_34;
  
  local_34 = unaff_ESI;
  if ((int)this_ptr[0x30] != unaff_ESI) {
    FUN_01e40eb0();
    if (local_60 == (int64_t *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01e42030();
      bVar9 = local_90 != (int64_t *)0x0;
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01e42030();
      (**(code **)(*local_60 + 0x620))();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (((char)this_ptr[0x4f] == '\0') || ((int)this_ptr[0x30] != local_34)) {
    bVar9 = (int)this_ptr[0x30] != local_34 || (char)this_ptr[0x4f] != '\0';
  }
  else {
    bVar9 = true;
    if (*(int *)(this_ptr[0x51] + 0xc) == *(int *)(this_ptr[0x2c] + 0xc)) {
      if (*(int *)(this_ptr[0x51] + 0xc) == 0) {
        bVar9 = false;
      }
      else {
        FUN_00d23310();
        pplVar5 = &local_90;
        if (local_58[0] != '\0') {
          pplVar5 = (int64_t **)local_58;
        }
        local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_58[0]);
        *(char *)pplVar5 = '\0';
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar9 = *(int *)((int64_t)local_60 + 0xc) != (int)this_ptr[0x30];
        if (((char)local_90 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(int *)(this_ptr + 0x30) = local_34;
  FUN_00d216c0();
  if (0 < *(int *)(this_ptr[0x2c] + 0xc)) {
    if (local_34 < 1) {
      iVar7 = 0;
      do {
        FUN_00d7a7b0();
        if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this_ptr[0x2c] + 0xc));
    }
    else {
      iVar7 = 0;
      do {
        FUN_00d7a7b0();
        iVar6 = local_34;
        if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), iVar6 = local_34, local_58[0] != '\0' && (local_60 != (int64_t *)0x0))
           )) {
          FUN_00d50b20();
          iVar6 = local_34;
        }
        do {
          lVar3 = g_028b8a78;
          if (g_028b8a78 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this_ptr[0x2c] + 0xc));
    }
  }
  if ((bVar9) && ((char)this_ptr[0x4f] != '\0')) {
    if (this_ptr[0x51] != 0) {
      local_58[0] = '\0';
      local_60 = (int64_t *)0x0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = this_ptr[0x51];
      iVar7 = 0;
      while( true ) {
        iVar6 = 0;
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar6 = -iVar7;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar7);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar6 = 0;
          }
          local_48 = CONCAT44(iVar6,(int)local_48);
        }
        lVar3 = (int64_t)(int)local_48;
        iVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        if (*(int *)(local_50 + 0xc) <= iVar7) break;
        local_60 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar3 * 8);
        iVar7 = iVar6;
        if (local_60 != (int64_t *)0x0) {
          local_88 = '\0';
          local_90 = (int64_t *)0x0;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_80 = local_60;
          while( true ) {
            lVar3 = (int64_t)(int)local_78;
            iVar7 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar7);
            if (*(int *)((int64_t)local_80 + 0xc) <= iVar7) break;
            local_90 = *(int64_t **)(local_80[2] + 8 + lVar3 * 8);
            if (local_90 != g_028b8a88) {
              (**(code **)(*local_90 + 0x978))();
              (**(code **)(*local_90 + 0x478))();
            }
            FUN_00d50130();
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar7 = -local_78._4_4_;
              }
              else {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar7 = 0;
              }
              local_78 = CONCAT44(iVar7,(int)local_78);
            }
          }
          FUN_01de69a0();
          iVar7 = local_48._4_4_;
        }
      }
      FUN_01de6930();
    }
    FUN_00d216c0();
    if (0 < *(int *)(this_ptr[0x2c] + 0xc)) {
      if (local_34 < 1) {
        iVar7 = 0;
        do {
          FUN_01dcf670();
          if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(this_ptr[0x2c] + 0xc));
      }
      else {
        iVar7 = 0;
        do {
          FUN_01dcf670();
          iVar6 = local_34;
          if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
             ((FUN_00d50b00(), iVar6 = local_34, local_58[0] != '\0' &&
              (local_60 != (int64_t *)0x0)))) {
            FUN_00d50b20();
            iVar6 = local_34;
          }
          do {
            plVar1 = g_028b8a88;
            if (g_028b8a88 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(this_ptr[0x2c] + 0xc));
      }
    }
  }
  (**(code **)(*this_ptr + 0xa20))();
  if (local_34 <= (int)this_ptr[0x36]) {
    *(void*)(this_ptr + 0x36) = 0xffffffff;
  }
  (**(code **)(*this_ptr + 0x928))();
  lVar3 = this_ptr[0x34];
  if (lVar3 != 0) {
    iVar7 = *(int *)(lVar3 + 0x18);
    iVar6 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (3 < iVar7) {
      uVar2 = iVar6 >> 2;
      uVar8 = (uint64_t)uVar2;
      bVar9 = false;
      while( true ) {
        uVar2 = uVar2 - 1;
        pvVar4 = (void *)(uint64_t)uVar2;
        if (local_34 <= *(int *)(*(int64_t *)(lVar3 + 0x10) + (int64_t)pvVar4 * 4)) {
          FUN_00e7b4e0();
          FUN_00c921e0();
          bVar9 = true;
        }
        if ((int64_t)uVar8 < 2) break;
        uVar8 = uVar8 - 1;
        lVar3 = this_ptr[0x34];
      }
      if (bVar9) {
        lVar3 = this_ptr[0x34];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e340();
        _memcpy(pvVar4,(void *)(int64_t)*(int *)(lVar3 + 0x18),param_3);
        FUN_00d50b20();
        (**(code **)(*this_ptr + 0x400))();
      }
    }
  }
  (**(code **)(*this_ptr + 0x930))();
  (**(code **)(*this_ptr + 0x620))();
  return;
}

