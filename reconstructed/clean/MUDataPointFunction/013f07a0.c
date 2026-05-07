// Function: FUN_013f07a0
// Address: 013f07a0
// Size: 2389 bytes
// Class: MUDataPointFunction

void FUN_013f07a0(double param_1,double param_2,double param_3,double param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint32_t in_EAX;
  int iVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  void* in_ECX;
  int64_t *plVar7;
  int unaff_ESI;
  int64_t *this_ptr;
  bool bVar8;
  double in_XMM4_Qa;
  double in_XMM5_Qa;
  uint32_t unaff_XMM6_Da;
  uint32_t unaff_XMM6_Db;
  uint32_t unaff_XMM7_Da;
  uint32_t unaff_XMM7_Db;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_res8;
  double local_res10;
  int64_t local_128;
  char local_120;
  int64_t local_f8;
  char local_f0;
  int64_t local_d8;
  char local_d0;
  uint32_t local_a8;
  uint32_t local_48;
  
  dVar14 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) - param_1;
  dVar11 = param_3 - param_1;
  dVar13 = in_XMM4_Qa - (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  dVar16 = param_4 - param_2;
  dVar17 = in_XMM5_Qa - (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  if ((dVar14 != 0.0) || (NAN(dVar14))) {
    dVar14 = ((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) - param_2) / dVar14;
    dVar19 = dVar14 * dVar14;
    dVar9 = (double)((uint64_t)(dVar14 * dVar16 - dVar19 * dVar11) & g_023908f0);
    dVar10 = (double)((uint64_t)(dVar14 * dVar17 - dVar19 * dVar13) & _UNK_023908f8);
    dVar15 = (double)((uint64_t)(dVar11 * dVar14 - dVar16) & g_023908f0);
    dVar14 = (double)((uint64_t)(dVar13 * dVar14 - dVar17) & _UNK_023908f8);
    dVar18 = local_res8 * (dVar19 + g_0238fee8);
    dVar19 = local_res10 * (dVar19 + g_0238fee8);
    auVar1._4_4_ = (uint)(dVar18 < dVar10) * -0x80000000;
    auVar1._0_4_ = (uint)(dVar18 < dVar9) * -0x80000000;
    auVar1._8_4_ = (uint)(dVar19 < dVar15) * -0x80000000;
    auVar1._12_4_ = (uint)(dVar19 < dVar14) * -0x80000000;
    iVar3 = movmskps(in_EAX,auVar1);
    if (iVar3 == 0) {
      return;
    }
    auVar2._4_4_ = (uint)(dVar10 <= dVar18 + dVar18) * -0x80000000;
    auVar2._0_4_ = (uint)(dVar9 <= dVar18 + dVar18) * -0x80000000;
    auVar2._8_4_ = (uint)(dVar15 <= dVar19 + dVar19) * -0x80000000;
    auVar2._12_4_ = (uint)(dVar14 <= dVar19 + dVar19) * -0x80000000;
    uVar4 = movmskps(iVar3,auVar2);
    bVar8 = (char)uVar4 == '\x0f';
  }
  else {
    if ((dVar11 <= local_res8) && (dVar13 <= local_res8)) {
      return;
    }
    dVar14 = local_res8 + local_res8;
    in_ECX = CONCAT31((int3)(in_ECX >> 8),dVar11 <= dVar14);
    bVar8 = dVar13 <= dVar14 && dVar11 <= dVar14;
  }
  if (unaff_ESI < 0x19) {
    dVar14 = (in_XMM5_Qa - param_4) * (in_XMM5_Qa - param_4) +
             (in_XMM4_Qa - param_3) * (in_XMM4_Qa - param_3);
    dVar11 = dVar16 * dVar16 + dVar11 * dVar11;
    dVar13 = dVar17 * dVar17 + dVar13 * dVar13;
    if (((((bVar8) || (dVar14 <= g_0240e9b8 * (dVar11 + dVar13))) ||
         ((dVar11 + dVar13) * g_0241c3f0 <= dVar14)) ||
        ((dVar11 <= dVar14 * g_0240d7d0 || (dVar11 <= dVar13 * g_0240d7d0)))) ||
       ((dVar13 <= dVar14 * g_0240d7d0 || (dVar13 <= g_0240d7d0 * dVar11)))) {
      dVar14 = (g_023942d0 * dVar14 + dVar11) / (dVar14 + dVar11 + dVar13);
      dVar10 = g_0238fee8 - dVar14;
      dVar16 = param_3 * dVar14 + param_1 * dVar10;
      dVar17 = in_XMM4_Qa * dVar14 + param_3 * dVar10;
      dVar19 = param_4 * dVar14 + param_2 * dVar10;
      dVar13 = in_XMM5_Qa * dVar14 + param_4 * dVar10;
      dVar11 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) +
                        in_XMM4_Qa * dVar10) + dVar17 * dVar10;
      dVar9 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + in_XMM5_Qa * dVar10
                       ) + dVar13 * dVar10;
      dVar13 = dVar14 * dVar9 + dVar10 * (dVar14 * dVar13 + dVar10 * dVar19);
      FUN_013f07a0(SUB84(param_1,0),param_2,dVar16,dVar19,*this_ptr,0);
      plVar7 = (int64_t *)*this_ptr;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (int64_t *)*this_ptr;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_48 = SUB84(dVar14 * dVar11 + dVar10 * (dVar14 * dVar17 + dVar10 * dVar16),0);
      (**(code **)(*plVar7 + 0x418))(local_48,dVar13);
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      dVar11 = dVar11 / (dVar11 + dVar14 + dVar13);
      dVar18 = g_0238fee8 - dVar11;
      dVar17 = in_XMM4_Qa * dVar11 + param_3 * dVar18;
      dVar19 = in_XMM5_Qa * dVar11 + param_4 * dVar18;
      dVar9 = dVar11 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) + in_XMM4_Qa * dVar18;
      dVar10 = dVar11 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + in_XMM5_Qa * dVar18;
      dVar15 = dVar11 * dVar9 + dVar17 * dVar18;
      dVar16 = dVar11 * dVar10 + dVar19 * dVar18;
      dVar17 = dVar11 * dVar15 +
               dVar18 * (dVar11 * dVar17 + dVar18 * (param_3 * dVar11 + param_1 * dVar18));
      dVar19 = dVar11 * dVar16 +
               dVar18 * (dVar11 * dVar19 + dVar18 * (param_4 * dVar11 + param_2 * dVar18));
      FUN_013f07a0(SUB84(param_1,0),param_2);
      plVar7 = (int64_t *)*this_ptr;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (int64_t *)*this_ptr;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_a8 = SUB84(dVar17,0);
      (**(code **)(*plVar7 + 0x418))(local_a8,dVar19);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      dVar14 = dVar14 / (dVar13 + dVar14);
      dVar12 = g_0238fee8 - dVar14;
      dVar18 = dVar9 * dVar14 + dVar15 * dVar12;
      dVar17 = dVar15 * dVar14 + dVar17 * dVar12;
      dVar13 = dVar10 * dVar14 + dVar16 * dVar12;
      dVar16 = dVar16 * dVar14 + dVar19 * dVar12;
      dVar11 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) + dVar12 * dVar9) +
               dVar12 * dVar18;
      dVar9 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + dVar12 * dVar10) +
              dVar12 * dVar13;
      dVar13 = dVar14 * dVar9 + dVar12 * (dVar12 * dVar16 + dVar14 * dVar13);
      FUN_013f07a0(local_a8,dVar19,dVar17,dVar16);
      plVar7 = (int64_t *)*this_ptr;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (int64_t *)*this_ptr;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_48 = SUB84(dVar14 * dVar11 + dVar12 * (dVar12 * dVar17 + dVar14 * dVar18),0);
      (**(code **)(*plVar7 + 0x418))(local_48,dVar13);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_013f07a0(local_48,dVar13,dVar11,dVar9);
  }
  return;
}

