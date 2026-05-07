// Function: FUN_019365c0
// Address: 019365c0
// Size: 2753 bytes
// Class: MUEditorSubview

void FUN_019365c0(uint64_t param_1,double param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  void *pvVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  void* pVar12;
  int64_t lVar13;
  double dVar14;
  int64_t *this_ptr;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int64_t local_d8;
  char local_d0;
  uint64_t local_90;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  double local_40;
  int64_t *local_38;
  
  plVar3 = local_80;
  FUN_019af4c0();
  if (this_ptr[0xa7] == 0) {
    if (*(int *)(this_ptr[0xab] + 0xc) == 0) {
      return;
    }
    do {
      FUN_00d23340();
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (int64_t **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_019562f0();
      if (((char)local_58 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (int64_t **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x478))();
      if ((char)local_58 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    } while (*(int *)(this_ptr[0xab] + 0xc) != 0);
    return;
  }
  local_38 = (int64_t *)(**(code **)(*this_ptr + 0xa60))();
  local_40 = param_2;
  dVar16 = (double)(**(code **)(&UNK_000016a8 + *this_ptr))();
  dVar14 = local_40;
  (**(code **)(&UNK_000016d0 + *this_ptr))((double)local_38 - dVar16);
  if ((((local_78[0] == '\0') && (local_80 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar15 = *(uint *)(this_ptr[0xab] + 0xc);
  local_90 = (uint64_t)uVar15;
  if ((int)uVar15 < 1) {
    local_40 = 0.0;
    plVar6 = (int64_t *)0x0;
  }
  else {
    local_38 = (int64_t *)0x0;
    local_48 = (double)((uint64_t)local_48 & 0xffffffff00000000);
    while( true ) {
      plVar2 = local_80;
      uVar15 = uVar15 - 1;
      FUN_01956980();
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (int64_t **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (int64_t *)0x0) {
        iVar5 = -1;
      }
      else {
        local_78[0] = '\0';
        iVar5 = FUN_00d23d20();
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(&g_00001770 + *this_ptr))();
      plVar6 = local_38;
      if (cVar4 == '\x01' && iVar5 != -1) {
        local_40 = (double)((uint64_t)local_48 & 0xffffffff);
      }
      else {
        plVar1 = *(int64_t **)(*(int64_t *)(this_ptr[0xab] + 0x10) + (uint64_t)uVar15 * 8);
        if (local_38 == plVar1) {
          if (((char)local_48 == '\0') && (local_38 != (int64_t *)0x0)) {
            local_40 = (double)CONCAT71((int7)((uint64_t)local_38 >> 8),1);
            local_48 = (double)((uint64_t)local_48 & 0xffffffff00000000);
            FUN_00d50b00();
          }
          else {
            local_40 = (double)((uint64_t)local_48 & 0xffffffff);
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            plVar6 = (int64_t *)FUN_00d50b00();
          }
          local_40 = (double)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
          plVar6 = plVar1;
          if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
            local_38 = plVar1;
            FUN_00d50b20();
          }
        }
        FUN_019562f0();
        (**(code **)(*plVar6 + 0x478))();
        local_78[0] = '\0';
        FUN_00d23f50();
        local_80 = plVar6;
        if ((local_78[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (iVar5 != -1) {
        FUN_00d23620();
      }
      if (((char)local_58 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((int64_t)local_90 < 2) break;
      local_90 = local_90 - 1;
      local_48 = (double)CONCAT44(local_48._4_4_,SUB84(local_40,0));
      local_38 = plVar6;
    }
  }
  local_38 = plVar6;
  dVar16 = (double)(**(code **)(*this_ptr + 0xa58))();
  FUN_019363e0();
  if ((((local_78[0] == '\0') && (local_80 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (double)(**(code **)(&UNK_000016a8 + *this_ptr))();
  dVar17 = (double)(**(code **)(&UNK_000016a8 + *this_ptr))();
  if (plVar3 != (int64_t *)0x0) {
    local_48 = dVar16 - local_48;
    local_78[0] = '\0';
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    local_70 = plVar3;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar5 = -local_68._4_4_;
        }
        else {
          iVar5 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar5);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar5 = 0;
        }
        local_68 = CONCAT44(iVar5,(int)local_68);
      }
      lVar8 = (int64_t)(int)local_68;
      iVar5 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar5) break;
      lVar13 = local_70[2];
      plVar2 = *(int64_t **)(lVar13 + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((void*)lVar13);
      pVar12 = (void*)lVar13;
      plVar6 = plVar2;
      if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x378))();
      plVar6 = local_58;
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        pvVar9 = _pthread_getspecific(pVar12);
        plVar6 = plVar2;
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar6 + 0x378))();
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        plVar6 = local_58;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (int64_t *)0x0) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar18 = (double)FUN_014bb4b0();
          if (local_48 <= dVar18) {
            pvVar9 = _pthread_getspecific(pVar12);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar18 = (double)FUN_014bb3e0();
            if (dVar18 <= (dVar16 - dVar17) + dVar14) {
              local_50 = '\0';
              local_58 = plVar2;
              FUN_00d21140();
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  plVar2 = plVar3;
  dVar14 = local_40;
  plVar6 = local_38;
  if (plVar3 != local_80) {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = local_80;
    dVar14 = local_40;
    plVar6 = local_38;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
      dVar14 = local_40;
      plVar6 = local_38;
    }
  }
  local_40 = dVar14;
  local_38 = plVar6;
  if (plVar2 == (int64_t *)0x0) {
    uVar15 = 0;
  }
  else {
    local_78[0] = '\0';
    local_60 = 0;
    local_68 = 0;
    local_48._4_4_ = (uint)((uint64_t)local_48 >> 0x20);
    local_70 = plVar2;
    if (*(int *)((int64_t)plVar2 + 0xc) < 1) {
      local_48 = (double)((uint64_t)local_48._4_4_ << 0x20);
    }
    else {
      iVar5 = 0;
      local_48 = (double)((uint64_t)local_48._4_4_ << 0x20);
      do {
        dVar14 = (double)((uint64_t)dVar14 & 0xffffffff);
        cVar4 = (**(code **)(&g_00001770 + *this_ptr))();
        if (cVar4 != '\0') {
          (**(code **)(&UNK_000016d8 + *this_ptr))();
          local_38 = local_58;
          cVar4 = SUB81(dVar14,0);
          uVar11 = (undefined7)((uint64_t)local_58 >> 8);
          if (local_58 == plVar6) {
            local_40 = dVar14;
            plVar3 = plVar6;
            if ((cVar4 == '\0') && (local_58 != (int64_t *)0x0)) {
              local_40 = (double)CONCAT71(uVar11,1);
              if (local_50 != '\0') goto LAB_01936f36;
              local_40 = (double)CONCAT71(uVar11,1);
              FUN_00d50b00();
            }
LAB_01936f22:
            local_38 = plVar3;
            plVar3 = local_38;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
          else {
            if (local_50 == '\0') {
              uVar10 = 0;
              if (local_58 != (int64_t *)0x0) {
                uVar10 = FUN_00d50b00();
              }
              local_40 = (double)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
              plVar3 = local_38;
              if ((cVar4 != '\0') && (plVar6 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar3 = local_38;
              }
              goto LAB_01936f22;
            }
            local_40 = (double)CONCAT71(uVar11,1);
            plVar3 = local_38;
            if ((cVar4 != '\0') && (plVar6 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
LAB_01936f36:
          local_38 = plVar3;
          (**(code **)(*this_ptr + 0x450))();
          local_58 = local_38;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar10 = FUN_019562f0();
          local_48 = (double)CONCAT44(local_48._4_4_,(int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1)
                                     );
          plVar6 = local_38;
          dVar14 = local_40;
        }
        iVar5 = iVar5 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar5);
      } while (iVar5 < *(int *)((int64_t)plVar2 + 0xc));
    }
    local_40 = dVar14;
    local_38 = plVar6;
    FUN_0131c810();
    uVar15 = (uint)local_48;
  }
  for (iVar5 = *(int *)(this_ptr[0xab] + 0xc); plVar3 = local_38, 0 < iVar5; iVar5 = iVar5 + -1) {
    FUN_0198a800();
  }
  if ((uVar15 & 1) != 0) {
    (**(code **)(*this_ptr + 0xb48))();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40._0_1_ != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

