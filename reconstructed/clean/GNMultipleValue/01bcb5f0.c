// Function: FUN_01bcb5f0
// Address: 01bcb5f0
// Size: 2380 bytes
// Class: GNMultipleValue

void FUN_01bcb5f0(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int iVar8;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  float fVar11;
  float extraout_XMM0_Db;
  double dVar12;
  double dVar13;
  uint64_t uVar14;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint8_t local_a8 [16];
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  uint64_t extraout_XMM0_Qb_00;
  
  plVar3 = local_70;
  plVar1 = (int64_t *)this_ptr[0x2a];
  if (plVar1 == (int64_t *)0x0) {
    while( true ) {
      FUN_00d50b00();
      (**(code **)(*this_ptr + 0x4a0))();
      iVar8 = *(int *)((int64_t)local_70 + 0xc);
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (iVar8 == 0) break;
      FUN_00d50b00();
      (**(code **)(*this_ptr + 0x4a0))();
      FUN_00d23340();
      local_38[0] = (char)local_68;
      pplVar7 = &local_68;
      if ((char)local_68 == '\0') {
        pplVar7 = (int64_t **)local_38;
      }
      *(char *)pplVar7 = '\0';
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_70 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    if (this_ptr[0x28] == 0) goto LAB_01bcbf7a;
    (**(code **)(*plVar1 + 0x9a0))();
    FUN_01dce580();
    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x3f8))();
    if ((char)local_68 == '\0') {
      if (local_70 == (int64_t *)0x0) goto LAB_01bcb85a;
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01bcb7b6:
      local_68._0_1_ = '\0';
      local_60 = local_70;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar6 = (int64_t)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
        (**(code **)(**(int64_t **)(local_60[2] + 8 + lVar6 * 8) + 0x380))();
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar8 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
      }
      FUN_002e0650();
      bVar2 = false;
      plVar4 = (int64_t *)this_ptr[0x27];
      plVar10 = local_60;
    }
    else {
      if (local_70 != (int64_t *)0x0) goto LAB_01bcb7b6;
LAB_01bcb85a:
      bVar2 = true;
      plVar4 = (int64_t *)this_ptr[0x27];
      plVar10 = local_60;
    }
    local_60 = plVar4;
    if (local_60 != (int64_t *)0x0) {
      local_68._0_1_ = '\0';
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar8 = -local_58._4_4_;
          }
          else {
            iVar8 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
        lVar6 = (int64_t)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
        plVar10 = *(int64_t **)(local_60[2] + 8 + lVar6 * 8);
        local_40 = '\0';
        local_48 = plVar10;
        cVar5 = FUN_00d23d70();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          (**(code **)(*plVar10 + 0x380))();
        }
      }
      FUN_002e0650();
      plVar10 = local_60;
    }
    local_60 = plVar10;
    FUN_00d216c0();
    local_68._0_1_ = '\0';
    FUN_00d214d0();
    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    (**(code **)(*this_ptr + 0x4a0))();
    plVar10 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01dcb110();
    if ((char)local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68._0_1_ = '\0';
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_01be80e0();
    if ((((char)local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), (char)local_68 != '\0' && (local_70 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    dVar12 = (double)(**(code **)(*local_70 + 0x378))();
    dVar13 = (double)(**(code **)(*local_70 + 0x368))();
    uVar14 = (**(code **)(*local_70 + 0x390))(dVar12 + dVar13);
    (**(code **)(*local_70 + 0x368))();
    fVar11 = (float)(**(code **)(*local_70 + 0x390))();
    FUN_01beead0();
    local_a8._0_4_ = (uint32_t)uVar14;
    local_a8._4_4_ = (uint32_t)((uint64_t)uVar14 >> 0x20);
    local_a8._8_4_ = (uint32_t)extraout_XMM0_Qb;
    local_a8._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar16._0_4_ = g_023945e0 & (uint)((float)local_a8._0_4_ - fVar11);
    auVar16._4_4_ = _UNK_023945e4 & local_a8._4_4_;
    auVar16._8_4_ = _UNK_023945e8 & local_a8._8_4_;
    auVar16._12_4_ = _UNK_023945ec & local_a8._12_4_;
    auVar15._4_12_ = SUB1612(auVar16 | g_023945f0,4);
    auVar15._0_4_ = SUB164(auVar16 | g_023945f0,0) + ((float)local_a8._0_4_ - fVar11);
    auVar16 = roundss(auVar15,auVar15,0xb);
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    local_a8 = blendps(auVar19,auVar16,1);
    if ((char)local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01bcbb90;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_01bcbb90:
      local_68._0_1_ = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = plVar3;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar6 = (int64_t)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
        local_70 = *(int64_t **)(local_60[2] + 8 + lVar6 * 8);
        FUN_01bc0650();
        plVar10 = local_48;
        if (local_40 == '\0') {
          if (local_48 == (int64_t *)0x0) goto LAB_01bcbc40;
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == (int64_t *)0x0) {
LAB_01bcbc40:
          FUN_01bc0730();
          if ((((local_48 != (int64_t *)0x0) && (plVar10 = local_48, local_40 == '\0')) &&
              (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        auVar17._0_8_ = FUN_01bbf250();
        auVar17._8_8_ = extraout_XMM0_Qb_00;
        auVar18._4_12_ = auVar17._4_12_;
        auVar18._0_4_ = (float)auVar17._0_8_ + extraout_XMM0_Db;
        blendps(ZEXT816(0),local_a8,2);
        auVar16 = insertps(local_a8,auVar18,0x10);
        (**(code **)(*plVar10 + 0x4d0))();
        (**(code **)(*plVar10 + 0x918))();
        local_40 = '\0';
        local_48 = plVar10;
        iVar8 = FUN_00d237a0();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 < 0) {
          FUN_00d50b00();
          (**(code **)(*this_ptr + 0x450))();
          FUN_00d50b20();
        }
        else {
          FUN_00d23620();
        }
        (**(code **)(*plVar10 + 0x4d8))();
        FUN_01bc1260();
        (**(code **)(*local_48 + 0x5c0))();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        local_f8 = auVar16._0_4_;
        fStack_f4 = auVar16._4_4_;
        fStack_f0 = auVar16._8_4_;
        fStack_ec = auVar16._12_4_;
        auVar20._0_4_ = local_f8 + local_a8._0_4_;
        auVar20._4_4_ = fStack_f4 + local_a8._4_4_;
        auVar20._8_4_ = fStack_f0 + local_a8._8_4_;
        auVar20._12_4_ = fStack_ec + local_a8._12_4_;
        local_a8 = blendps(local_a8,auVar20,2);
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar8 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
      }
      FUN_002e0650();
      FUN_00d50b20();
    }
    FUN_00d50b00();
    (**(code **)(*this_ptr + 0x4e8))();
    FUN_00d50b20();
    if (*(int *)((int64_t)plVar3 + 0xc) != 0) {
      do {
        FUN_00d23340();
        local_48 = (int64_t *)CONCAT71(local_48._1_7_,(char)local_68);
        pplVar7 = &local_68;
        if ((char)local_68 == '\0') {
          pplVar7 = &local_48;
        }
        *(void*)pplVar7 = 0;
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        (**(code **)(*local_70 + 0x480))();
        FUN_01e40eb0();
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 != (int64_t *)0x0) {
          (**(code **)(*local_70 + 0x478))();
        }
        lVar6 = local_70[0x27];
        lVar9 = 0;
        if (lVar6 == 0) {
LAB_01bcbf1b:
          if (lVar9 != 0) goto LAB_01bcbf20;
        }
        else {
          if (*(int64_t *)(lVar6 + 0x40) != 0) {
            *(void*)(lVar6 + 0x40) = 0;
            FUN_00d50b20();
            lVar9 = local_70[0x27];
            goto LAB_01bcbf1b;
          }
LAB_01bcbf20:
          local_70[0x27] = 0;
          FUN_00d50b20();
        }
        FUN_00d23740();
        FUN_00d50b20();
      } while (*(int *)((int64_t)plVar3 + 0xc) != 0);
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (!bVar2) {
      FUN_00d50b20();
    }
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
LAB_01bcbf7a:
  FUN_00d50b20();
  return;
}

