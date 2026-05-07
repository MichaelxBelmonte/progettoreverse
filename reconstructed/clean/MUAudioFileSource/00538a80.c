// Function: FUN_00538a80
// Address: 00538a80
// Size: 3754 bytes
// Class: MUAudioFileSource

void FUN_00538a80(double param_1,double param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  void* pVar13;
  uint uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t *in_RDX;
  int iVar18;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar19;
  uint64_t uVar20;
  double dVar21;
  double dVar22;
  int64_t local_108;
  char local_100;
  double local_a8;
  double local_a0;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if (NAN(param_1)) {
    if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
      if (*in_RDX != 0) {
        local_68._0_1_ = '\0';
        local_70 = 0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        local_a8 = param_2;
        local_a0 = param_1;
        local_60 = *in_RDX;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if ((int)local_58._4_4_ < 1) {
              iVar18 = -local_58._4_4_;
            }
            else {
              iVar18 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar18);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar18 = 0;
            }
            local_58 = CONCAT44(iVar18,(int)local_58);
          }
          lVar9 = (int64_t)(int)local_58;
          iVar18 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar18);
          if (*(int *)(local_60 + 0xc) <= iVar18) break;
          lVar17 = *(int64_t *)(local_60 + 0x10);
          local_70 = *(int64_t *)(lVar17 + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)lVar17);
          pVar13 = (void*)lVar17;
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar19 = (double)FUN_012ebfe0();
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar21 = (double)FUN_012ebd30();
          dVar21 = dVar21 - dVar19;
          dVar4 = local_a8;
          dVar22 = local_a0;
          if ((g_02390448 < dVar21) &&
             (dVar22 = (double)FUN_00e7b500(dVar19), dVar4 = dVar21, !NAN(local_a0))) {
            dVar22 = (double)FUN_00e7b6a0(local_a0);
            dVar4 = local_a8;
          }
          local_a0 = dVar22;
          local_a8 = dVar4;
        }
        FUN_000be170();
        param_1 = local_a0;
        param_2 = local_a8;
      }
    }
    else {
      param_1 = (double)FUN_005388f0();
    }
  }
  *(double *)(this_ptr + 0x348) = param_1;
  *(double *)(this_ptr + 0x350) = param_2;
  plVar12 = (int64_t *)*arg1;
  plVar1 = *(int64_t **)(this_ptr + 0x328);
  bVar6 = 1;
  bVar5 = 1;
  if (((plVar12 != plVar1) && (bVar5 = 0, plVar12 != (int64_t *)0x0)) &&
     (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b00();
    bVar5 = (**(code **)(*plVar12 + 0x50))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar12 = (int64_t *)*in_RDX;
  plVar1 = *(int64_t **)(this_ptr + 0x330);
  if (plVar12 == plVar1) {
LAB_00538ba7:
    if ((bVar5 & bVar6) != 0) goto LAB_00539701;
    bVar6 = bVar6 ^ 1;
  }
  else {
    bVar6 = 1;
    if ((plVar12 != (int64_t *)0x0) && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b00();
      bVar6 = (**(code **)(*plVar12 + 0x50))();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00538ba7;
    }
  }
  lVar9 = *arg1;
  lVar17 = *(int64_t *)(this_ptr + 0x328);
  if (lVar17 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x328) = lVar9;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  lVar9 = *in_RDX;
  lVar17 = *(int64_t *)(this_ptr + 0x330);
  if (lVar17 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x330) = lVar9;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  if ((*arg1 != 0) && ((*(int *)(*arg1 + 0xc) != 0 && bVar5 == 0) && bVar6 == 0)) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    lVar9 = *in_RDX;
    *in_RDX = (int64_t)puVar8;
    if (((char)in_RDX[1] != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(in_RDX + 1) = 1;
    if (*arg1 != 0) {
      local_68._0_1_ = '\0';
      local_70 = 0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = *arg1;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if ((int)local_58._4_4_ < 1) {
            iVar18 = -local_58._4_4_;
          }
          else {
            iVar18 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar18);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar18 = 0;
          }
          local_58 = CONCAT44(iVar18,(int)local_58);
        }
        lVar9 = (int64_t)(int)local_58;
        iVar18 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar18);
        if (*(int *)(local_60 + 0xc) <= iVar18) break;
        lVar17 = *(int64_t *)(local_60 + 0x10);
        local_70 = *(int64_t *)(lVar17 + 8 + lVar9 * 8);
        pvVar10 = _pthread_getspecific((void*)lVar17);
        pVar13 = (void*)lVar17;
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01653bd0();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f20();
        lVar9 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = lVar9;
        cVar7 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          local_40 = '\0';
          local_48 = lVar9;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00277f20();
    }
  }
  lVar17 = local_70;
  lVar9 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar19 = (double)FUN_00e7d6f0();
  uVar11 = (uint64_t)(dVar19 * g_023907c0);
  dVar19 = dVar19 * g_023907c0 - g_023907c8;
  uVar15 = 0xaaaaaaaaaaaaaaab;
  uVar20 = FUN_0071a120();
  if (((((char)local_68 == '\0') && (local_70 != 0)) &&
      (uVar20 = FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
    uVar20 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar19 & (int64_t)uVar11 >> 0x3f | uVar11) / 3);
  local_48 = lVar9;
  local_40 = '\0';
  FUN_000175c0(uVar20,&local_48);
  if ((char)local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), (char)local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    local_68._0_1_ = '\0';
    bVar5 = FUN_00c70bc0();
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != 0 & bVar5) == 0) {
    if ((*in_RDX == 0) || (iVar18 = *(int *)(*in_RDX + 0xc), iVar18 == 0)) {
      if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) goto LAB_005393a7;
      FUN_00d23310();
      pVar13 = (void*)CONCAT71((int7)((uint64_t)uVar15 >> 8),(char)local_68);
      plVar12 = (int64_t *)local_38;
      if ((char)local_68 != '\0') {
        plVar12 = &local_68;
      }
      local_38[0] = (char)local_68;
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      lVar9 = CONCAT71(local_90._1_7_,(char)local_90);
      if (local_88 == '\0') {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      FUN_000ba510();
      lVar2 = local_48;
      lVar16 = *in_RDX;
      if (lVar16 == local_48) {
        if (((char)in_RDX[1] == '\0') && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_00539251;
          FUN_00d50b00();
          goto LAB_005392f4;
        }
LAB_005392f9:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = in_RDX[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *in_RDX = lVar2;
          if (((char)lVar3 != '\0') && (lVar16 != 0)) {
            FUN_00d50b20();
          }
LAB_005392f4:
          *(void*)(in_RDX + 1) = 1;
          goto LAB_005392f9;
        }
        *in_RDX = local_48;
        if (((char)lVar3 != '\0') && (lVar16 != 0)) {
          FUN_00d50b20();
        }
LAB_00539251:
        *(void*)(in_RDX + 1) = 1;
        local_40 = '\0';
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (1 < iVar18) {
      FUN_00d23310();
      plVar12 = &local_90;
      if ((char)local_68 != '\0') {
        plVar12 = &local_68;
      }
      local_90._0_1_ = (char)local_68;
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_90 == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      FUN_000ba510();
      lVar16 = local_48;
      lVar9 = *in_RDX;
      if (lVar9 == local_48) {
        if (((char)in_RDX[1] == '\0') && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_00539284;
          FUN_00d50b00();
          goto LAB_00539375;
        }
LAB_00539379:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar2 = in_RDX[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *in_RDX = lVar16;
          if (((char)lVar2 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
LAB_00539375:
          *(void*)(in_RDX + 1) = 1;
          goto LAB_00539379;
        }
        *in_RDX = local_48;
        if (((char)lVar2 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
LAB_00539284:
        *(void*)(in_RDX + 1) = 1;
        local_40 = '\0';
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
    }
LAB_005393a7:
    if (*in_RDX == 0) goto LAB_0053967d;
    lVar9 = 0;
    if (*arg1 != 0) {
      FUN_00d23310();
      plVar12 = &local_68;
      if ((char)local_68 == '\0') {
        plVar12 = &local_48;
      }
      local_48 = CONCAT71(local_48._1_7_,(char)local_68);
      *(void*)plVar12 = 0;
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      FUN_00539f40();
      lVar9 = *arg1;
      if (lVar9 == local_70) {
        if (((char)arg1[1] == '\0') && (local_70 != 0)) {
          if ((char)local_68 != '\0') goto LAB_005394db;
          FUN_00d50b00();
          goto LAB_005394bd;
        }
LAB_005394c2:
        if (((char)local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar16 = arg1[1];
        if ((char)local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_70;
          if (((char)lVar16 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
LAB_005394bd:
          *(void*)(arg1 + 1) = 1;
          goto LAB_005394c2;
        }
        *arg1 = local_70;
        if (((char)lVar16 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
LAB_005394db:
        *(void*)(arg1 + 1) = 1;
        local_68._0_1_ = '\0';
      }
      if (*arg1 != 0) {
        local_68._0_1_ = '\0';
        local_70 = 0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = *arg1;
        uVar14 = 0;
        while( true ) {
          if (uVar14 != 0) {
            if ((int)uVar14 < 1) {
              iVar18 = -uVar14;
            }
            else {
              local_58 = CONCAT44(local_58._4_4_,(int)local_58 - uVar14);
              FUN_00d23690(uVar14,uVar14);
              local_50 = local_50 + local_58._4_4_;
              iVar18 = 0;
            }
            local_58 = CONCAT44(iVar18,(int)local_58);
          }
          lVar9 = (int64_t)(int)local_58;
          iVar18 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar18);
          if (*(int *)(local_60 + 0xc) <= iVar18) break;
          lVar16 = *(int64_t *)(local_60 + 0x10);
          local_70 = *(int64_t *)(lVar16 + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((void*)lVar16);
          pVar13 = (void*)lVar16;
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01653bd0();
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8f20();
          lVar9 = local_48;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (CONCAT71(local_90._1_7_,(char)local_90) != 0)) {
            FUN_00d50b20();
          }
          uVar14 = local_58._4_4_;
          if (lVar17 != lVar9) {
            uVar14 = ~local_58._4_4_;
            local_58 = CONCAT44(uVar14,(int)local_58);
          }
        }
        FUN_00277f20();
      }
      if (lVar17 != 0) {
        FUN_00d50b20();
      }
      goto LAB_0053967d;
    }
  }
  else {
LAB_0053967d:
    lVar9 = *arg1;
  }
  lVar17 = *(int64_t *)(this_ptr + 0x338);
  if (lVar17 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x338) = lVar9;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  lVar9 = *in_RDX;
  lVar17 = *(int64_t *)(this_ptr + 0x340);
  if (lVar17 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x340) = lVar9;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
LAB_00539701:
  if (*(int64_t *)(this_ptr + 0x300) != 0) {
    FUN_00657760();
    if ((char)local_68 == '\0') {
      if (local_70 == 0) {
        return;
      }
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_70 == 0) {
      return;
    }
    FUN_00444010();
    FUN_00d50b20();
  }
  return;
}

