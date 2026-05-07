// Function: FUN_01a81d00
// Address: 01a81d00
// Size: 956 bytes
// Class: Unknown

void FUN_01a81d00(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t *this_ptr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar10 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t local_98 [8];
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint8_t local_68 [16];
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  uStack_90 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  local_98._4_4_ = (uint32_t)((uint64_t)param_2 >> 0x20);
  if (this_ptr[0x2e] != 0) {
    uVar9 = FUN_01989f80();
    plVar1 = local_48;
    local_50 = 0;
    local_58 = this_ptr[0x2e];
    if (local_58 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0xab0))(uVar9,&local_58);
    plVar1 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      if ((int)this_ptr[0x30] == 2) {
        FUN_01989f80();
        plVar2 = local_38;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01259650();
        uVar4 = (**(code **)(*plVar2 + 0x938))();
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        fVar5 = (float)(**(code **)(*plVar1 + 0x4d8))();
        FUN_01e3f820();
        FUN_01989f80();
        fVar6 = (float)(**(code **)(&UNK_00001418 + *local_38))();
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_98._0_4_ = (float)local_98._4_4_ * g_0239011c + extraout_XMM0_Db;
        uStack_8c = uStack_90;
        if ((fVar6 != 0.0) || (NAN(fVar6))) {
          FUN_01989f80();
          uVar9 = (**(code **)(*local_38 + 3000))();
          FUN_01989f80();
          fVar6 = (float)(**(code **)(&UNK_00001418 + *local_48))();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_68._0_4_ = (uint32_t)uVar9;
          local_68._4_4_ = (uint32_t)((uint64_t)uVar9 >> 0x20);
          local_68._8_4_ = (uint32_t)extraout_XMM0_Qb;
          local_68._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
          fVar6 = (float)local_68._0_4_ * ((g_02390124 - fVar6) * g_0241b1f0 + g_023908e0);
          local_68._0_4_ = fVar6;
          local_98._0_4_ = (float)local_98._0_4_ + g_023b1d84;
        }
        else {
          FUN_01989f80();
          uVar9 = (**(code **)(*local_38 + 3000))();
          local_68._8_8_ = extraout_XMM0_Qb_00;
          local_68._0_8_ = uVar9;
          if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_68._0_4_ = (float)uVar9 * g_0241b1ec;
        }
        fVar7 = (float)(**(code **)(*plVar1 + 0x4d8))();
        (**(code **)(*plVar1 + 0x4d8))();
        uVar8 = (**(code **)(*plVar1 + 0x4d8))();
        auVar10 = roundss(ZEXT416(uVar4),ZEXT416(uVar4),9);
        auVar12._4_4_ = local_68._4_4_;
        auVar12._0_4_ = (float)local_68._0_4_ + g_023908ec;
        auVar12._8_4_ = local_68._8_4_;
        auVar12._12_4_ = local_68._12_4_;
        auVar11 = insertps(g_023b1e70,auVar12,0x10);
        auVar10._0_4_ = (auVar10._0_4_ - fVar5) + g_02394210 + fVar7;
        auVar12 = roundss(_local_98,_local_98,9);
        auVar13._4_4_ = extraout_XMM0_Db_00;
        auVar13._0_4_ = extraout_XMM0_Db_00;
        auVar13._8_4_ = extraout_XMM0_Dd;
        auVar13._12_4_ = extraout_XMM0_Dd;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ =
             extraout_XMM0_Db_00 +
             ((float)local_68._0_4_ + g_023908ec) * g_02390118 + auVar12._0_4_;
        auVar12 = insertps(auVar10,auVar14,0x10);
        FUN_00d052e0(auVar12._0_8_,auVar11._0_8_,uVar8,fVar6);
        (**(code **)(*this_ptr + 0x4d0))();
      }
      else {
        (**(code **)(*plVar1 + 0x4d8))();
        (**(code **)(*this_ptr + 0x4d0))();
      }
      FUN_00d50b20();
    }
  }
  return;
}

