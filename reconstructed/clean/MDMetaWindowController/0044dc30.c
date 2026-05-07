// Function: FUN_0044dc30
// Address: 0044dc30
// Size: 3599 bytes
// Class: MDMetaWindowController
// String references:
//   "%s%d-%d"
//   "%s%d"

void FUN_0044dc30(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  void*puVar8;
  int64_t lVar9;
  int64_t **pplVar10;
  int iVar11;
  int64_t *this_ptr;
  bool bVar12;
  int64_t *local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  void*local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  uint16_t local_c0;
  uint8_t uStack_be;
  undefined5 uStack_bd;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  void*local_80;
  uint64_t local_78;
  int64_t *local_70;
  uint local_68 [2];
  void*local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  uint8_t local_31;
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_70 + 0x450))();
  if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    (**(code **)(*this_ptr + 0xa28))();
    plVar3 = local_70;
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*this_ptr + 0xa20))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar9 = g_02705f00;
      if (g_02705f00 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar9;
      local_1a8 = '\x01';
      (**(code **)(*this_ptr + 0xa10))();
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    local_80 = puVar8;
    (*g_02572370)();
    if ((void*)this_ptr[0x48] != (void*)0x0) {
      local_68[0] = local_68[0] & 0xffffff00;
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = (void*)this_ptr[0x48];
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar11 = -local_58._4_4_;
          }
          else {
            iVar11 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar11);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar11 = 0;
          }
          local_58 = CONCAT44(iVar11,(int)local_58);
        }
        lVar9 = (int64_t)(int)local_58;
        iVar11 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar11);
        if (*(int *)(local_60 + 6) <= iVar11) break;
        local_1c0 = *(int64_t **)(*(int64_t *)(local_60 + 8) + 8 + lVar9 * 8);
        local_1b8 = 0;
        local_70 = local_1c0;
        FUN_00451150(*(int64_t *)(local_60 + 8),&local_1c0);
        plVar3 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0044dde0;
          }
        }
        else if (local_48 != (int64_t *)0x0) {
LAB_0044dde0:
          local_40 = '\0';
          local_48 = plVar3;
          FUN_00d235a0();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    if (this_ptr[0x4b] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar9 = this_ptr[0x4b];
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      FUN_00451480();
      plVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_70 = plVar3;
      local_68[0] = local_68[0] & 0xffffff00;
      FUN_00d235a0();
      if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    iVar11 = FUN_0044fe10();
    if (iVar11 == 1) {
      iVar11 = 1;
      local_78 = local_78 & 0xffffffff00000000;
    }
    else {
      iVar11 = FUN_0044fe10();
      local_78 = CONCAT44(local_78._4_4_,(uint)(iVar11 == 2));
      iVar11 = (uint)(iVar11 == 2) * 2;
    }
    FUN_01d6f8d0();
    lVar9 = g_02705ed8;
    if ((*(char *)((int64_t)this_ptr + 0x249) == '\0') && ((char)this_ptr[0x49] != '\0')) {
      if (g_02705ed8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02705f08;
      local_1a0 = lVar9;
      local_198 = '\x01';
      if (g_02705f08 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar2;
      local_188 = '\x01';
      local_180 = 0;
      local_178 = '\0';
      FUN_00d31230(&local_180,&local_190);
      plVar3 = local_70;
      if ((char)local_68[0] == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      FUN_01d6f990();
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar5 = FUN_00451580();
    iVar6 = FUN_00451aa0();
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
    iVar1 = 1;
    if (iVar6 != 1) {
      iVar1 = iVar11;
    }
    if ((char)local_78 == '\0') {
      iVar1 = iVar11;
    }
    local_78 = CONCAT44(local_78._4_4_,iVar5);
    if (0 < iVar5) {
      iVar11 = 0;
      do {
        local_31 = 0;
        uStack_be = 0;
        local_c0 = 0x2021;
        iVar5 = FUN_00451aa0();
        local_60 = &local_c0;
        if (iVar11 < iVar5) {
          local_60 = (void*)&local_31;
        }
        if (iVar1 == 2) {
          local_68[0] = 3;
          local_70 = (int64_t *)&g_024f6748;
          local_58 = CONCAT44(iVar11 + 2,iVar11 + 1);
          FUN_00d8cb40(iVar11 + 1,&local_70);
          plVar3 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01d6f990();
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = 2;
          local_70 = &g_024f6780;
          local_58 = CONCAT44(local_58._4_4_,iVar11 + 1);
          FUN_00d8cb40(iVar11 + 1,&local_70);
          plVar3 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01d6f990();
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar11 = iVar11 + iVar1;
      } while (iVar11 < (int)local_78);
    }
    if (iVar1 == 2) {
      uVar7 = FUN_01d6fde0();
      *(void*)((int64_t)this_ptr + 0x24c) = uVar7;
      if (((char)this_ptr[0x49] == '\0') && (0 < (int)local_78)) {
        iVar11 = 0;
        do {
          local_31 = 0;
          uStack_be = 0;
          local_c0 = 0x2021;
          iVar5 = FUN_00451aa0();
          local_60 = &local_c0;
          if (iVar11 < iVar5) {
            local_60 = (void*)&local_31;
          }
          iVar11 = iVar11 + 1;
          local_68[0] = 2;
          local_70 = &g_024f6780;
          local_58 = CONCAT44(local_58._4_4_,iVar11);
          FUN_00d8cb40(&local_31,&local_70);
          plVar3 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01d6f990();
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        } while ((int)local_78 != iVar11);
      }
    }
    else {
      *(void*)((int64_t)this_ptr + 0x24c) = 0;
    }
    FUN_01d70010();
    if (local_70 == (int64_t *)0x0) {
      bVar12 = false;
    }
    else {
      FUN_01d70010();
      FUN_01d65ea0();
      bVar12 = local_48 != (int64_t *)0x0;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT53(uStack_bd,CONCAT12(uStack_be,local_c0)) != 0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar12) {
      FUN_01d70010();
      FUN_01d65ea0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_01d62b10();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int *)((int64_t)local_80 + 0xc) < 2) {
      if (*(int *)((int64_t)local_80 + 0xc) == 1) {
        (**(code **)(*this_ptr + 0x998))();
        FUN_00d23310();
        plVar3 = local_70;
        pplVar10 = &local_48;
        if ((char)local_68[0] != '\0') {
          pplVar10 = (int64_t **)local_68;
        }
        local_48 = (int64_t *)CONCAT71(local_48._1_7_,(char)local_68[0]);
        *(void*)pplVar10 = 0;
        if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        lVar9 = g_02705f10;
        if (g_02705f10 != 0) {
          FUN_00d50b00();
        }
        local_78 = lVar9;
        local_150 = lVar9;
        local_148 = '\0';
        FUN_00d90870();
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
        for (iVar11 = 0; iVar5 = FUN_01d6fde0(), iVar11 < iVar5; iVar11 = iVar11 + 1) {
          FUN_01d701d0();
          FUN_01d65230();
          local_140 = plVar3;
          local_138 = '\0';
          cVar4 = (**(code **)(*local_70 + 0x50))();
          if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') break;
        }
        FUN_01d6ed40();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_80 == (void*)0x0) {
          return;
        }
      }
      else {
        (**(code **)(*this_ptr + 0x998))();
        FUN_00d8ede0();
        local_90 = local_70;
        local_88 = 0;
        if ((char)local_68[0] == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = local_68[0] & 0xffffff00;
        }
        local_88 = '\x01';
        (**(code **)(*this_ptr + 0x968))();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0044f490();
        plVar3 = local_70;
        if ((char)local_68[0] == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = local_68[0] & 0xffffff00;
        }
        (**(code **)(*this_ptr + 0x6a8))();
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d6ed40();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x998))();
      FUN_00e99dd0();
      local_b0 = local_70;
      local_a8 = 0;
      if ((char)local_68[0] == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      local_a8 = '\x01';
      (**(code **)(*this_ptr + 0x968))();
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = g_027d64a0;
      local_170 = local_80;
      local_168 = '\0';
      if (g_027d64a0 != 0) {
        FUN_00d50b00();
      }
      local_160 = lVar9;
      local_158 = '\x01';
      FUN_00d95130();
      local_a0 = local_70;
      local_98 = 0;
      if ((char)local_68[0] == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      local_98 = '\x01';
      (**(code **)(*this_ptr + 0x6a8))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d6ed40();
    }
    FUN_00d50b20();
  }
  return;
}

