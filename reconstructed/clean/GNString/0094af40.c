// Function: FUN_0094af40
// Address: 0094af40
// Size: 1830 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0094af40(locale *param_1,byte *param_2,locale *param_3)

{
  int *piVar1;
  locale lVar2;
  uint uVar3;
  char *pcVar4;
  id *piVar5;
  byte *pbVar6;
  char cVar7;
  locale lVar8;
  char cVar9;
  int iVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  locale *plVar13;
  id *piVar14;
  locale *plVar15;
  int64_t lVar16;
  locale *plVar17;
  uint64_t uVar18;
  locale *arg1;
  int64_t this_ptr;
  locale *plVar19;
  locale *plVar20;
  byte bVar21;
  locale *plVar22;
  int64_t lVar23;
  bool bVar24;
  int64_t local_1d8;
  uint auStack_1d0 [2];
  int64_t *local_1c8;
  int64_t local_1c0 [15];
  id aiStack_148 [32];
  int64_t local_128 [2];
  int64_t *local_118;
  uint64_t local_110 [15];
  id aiStack_98 [40];
  uint8_t local_70;
  locale *local_68;
  byte *local_60;
  locale *local_58;
  int64_t *local_50;
  locale *local_48;
  
  plVar15 = param_1;
  local_60 = param_2;
  FUN_00928230();
  local_68 = param_1;
  if (param_3 != (locale *)0x0) {
    lVar23 = *(int64_t *)(local_1d8 + -0x18);
    std::ios_base::getloc();
    std::ios_base::imbue(plVar15);
    std::locale::~locale(plVar15);
    plVar11 = *(int64_t **)((int64_t)local_1c0 + lVar23 + 0x10);
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x10))();
      std::locale::locale(plVar15,param_3);
      std::locale::operator=(plVar15,param_3);
      param_1 = local_68;
      std::locale::~locale(plVar15);
    }
    std::locale::~locale(plVar15);
  }
  local_48 = arg1 + 0x38;
  FUN_0094b7b0();
  local_50 = &local_1d8;
  (**(code **)(this_ptr + 8))();
  uVar3 = *(uint *)((int64_t)auStack_1d0 + *(int64_t *)(local_1d8 + -0x18));
  plVar19 = *(locale **)((int64_t)local_1c0 + *(int64_t *)(local_1d8 + -0x18));
  std::string::resize((ulong)plVar15,'\0');
  local_58 = plVar19;
  if ((plVar19 == (locale *)0x0) || ((uVar3 & 0x10) == 0)) {
    if (0 < (int64_t)plVar19) {
      *(void*)((int64_t)local_1c0 + *(int64_t *)(local_1d8 + -0x18)) = 0;
    }
    (**(code **)(this_ptr + 0x10))();
    plVar19 = *(locale **)(param_1 + 0x28);
    if (((byte)arg1[0x70] & 2) == 0) {
LAB_0094b1a8:
      cVar9 = '\0';
    }
    else {
      if (*(locale **)(param_1 + 0x30) != plVar19) {
        lVar2 = *plVar19;
        local_48 = plVar19;
        std::ios_base::getloc();
        plVar11 = (int64_t *)std::locale::use_facet((id *)plVar15);
        plVar15 = (locale *)*plVar11;
        lVar8 = (locale)(**(code **)(plVar15 + 0x38))();
        std::locale::~locale(plVar15);
        if (lVar2 == lVar8) {
          cVar9 = '\0';
          plVar19 = local_48;
          goto LAB_0094b3d9;
        }
        lVar2 = *local_48;
        std::ios_base::getloc();
        plVar11 = (int64_t *)std::locale::use_facet((id *)plVar15);
        plVar15 = (locale *)*plVar11;
        lVar8 = (locale)(**(code **)(plVar15 + 0x38))();
        std::locale::~locale(plVar15);
        plVar19 = local_48;
        if (lVar2 == lVar8) goto LAB_0094b1a8;
      }
      std::ios_base::getloc();
      plVar11 = (int64_t *)std::locale::use_facet((id *)plVar15);
      plVar15 = (locale *)*plVar11;
      cVar9 = (**(code **)(plVar15 + 0x38))();
      std::locale::~locale(plVar15);
    }
LAB_0094b3d9:
    uVar12 = *(int64_t *)(arg1 + 0x68) + -1 + (uint64_t)(cVar9 == '\0');
    uVar18 = *(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28);
    if (uVar12 <= (uint64_t)(*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28))) {
      uVar18 = uVar12;
    }
    piVar5 = *(id **)(local_1d8 + -0x18);
    iVar10 = *(int *)(aiStack_148 + (int64_t)piVar5);
    if (iVar10 == -1) {
      piVar14 = piVar5;
      local_48 = plVar19;
      std::ios_base::getloc();
      plVar11 = (int64_t *)std::locale::use_facet(piVar14);
      plVar15 = (locale *)*plVar11;
      cVar9 = (**(code **)(plVar15 + 0x38))();
      std::locale::~locale(plVar15);
      iVar10 = (int)cVar9;
      *(int *)(aiStack_148 + (int64_t)piVar5) = iVar10;
    }
    plVar15 = local_58;
    FUN_0094b900(local_58,uVar18,(int)(char)iVar10,uVar3);
    goto LAB_0094b602;
  }
  (**(code **)(this_ptr + 0x10))();
  pcVar4 = *(char **)(param_1 + 0x28);
  plVar19 = (locale *)(*(int64_t *)(param_1 + 0x30) - (int64_t)pcVar4);
  if (((byte)arg1[0x70] & 2) == 0) {
LAB_0094b165:
    bVar21 = 0;
  }
  else {
    if (plVar19 != (locale *)0x0) {
      cVar9 = *pcVar4;
      std::ios_base::getloc();
      plVar11 = (int64_t *)std::locale::use_facet((id *)plVar15);
      plVar15 = (locale *)*plVar11;
      cVar7 = (**(code **)(plVar15 + 0x38))();
      std::locale::~locale(plVar15);
      if (cVar9 != cVar7) {
        cVar9 = *pcVar4;
        std::ios_base::getloc();
        plVar11 = (int64_t *)std::locale::use_facet((id *)plVar15);
        plVar15 = (locale *)*plVar11;
        cVar7 = (**(code **)(plVar15 + 0x38))();
        std::locale::~locale(plVar15);
        if (cVar9 != cVar7) goto LAB_0094b20f;
      }
      goto LAB_0094b165;
    }
LAB_0094b20f:
    bVar21 = 1;
  }
  if (((plVar19 == local_58) && (bVar21 == 0)) &&
     (plVar15 = arg1, (int64_t)local_58 <= *(int64_t *)(arg1 + 0x68))) {
    std::string::assign((char *)arg1,(ulong)local_58);
    plVar15 = arg1;
  }
  else {
    std::string::assign((char *)plVar15,(ulong)plVar19);
    FUN_009b28e0();
    plVar15 = (locale *)local_128;
    FUN_00928230();
    FUN_0094b7b0();
    pbVar6 = local_60;
    (**(code **)(this_ptr + 8))();
    *(void*)((int64_t)local_110 + *(int64_t *)(local_128[0] + -0x18)) = 0;
    if (bVar21 != 0) {
      local_70 = 0x20;
      FUN_009ad920();
    }
    (**(code **)(this_ptr + 0x10))();
    lVar23 = *(int64_t *)(local_68 + 0x28);
    lVar16 = *(int64_t *)(local_68 + 0x30);
    if ((lVar16 == lVar23) && (((byte)arg1[0x70] & 2) != 0)) {
      local_70 = 0x20;
      FUN_009ad920(plVar15,1);
      lVar23 = *(int64_t *)(local_68 + 0x28);
      lVar16 = *(int64_t *)(local_68 + 0x30);
      bVar21 = 1;
    }
    plVar17 = (locale *)(lVar16 - lVar23);
    if (*(locale **)(arg1 + 0x68) <= (locale *)(lVar16 - lVar23)) {
      plVar17 = *(locale **)(arg1 + 0x68);
    }
    bVar24 = local_58 < plVar17;
    local_58 = local_58 + -(int64_t)plVar17;
    if (bVar24 || local_58 == (locale *)0x0) {
      std::string::assign((char *)plVar15,(ulong)plVar17);
    }
    else {
      plVar22 = (locale *)(uint64_t)bVar21;
      plVar20 = plVar19 + (int64_t)plVar22;
      if (plVar17 < plVar19 + (int64_t)plVar22) {
        plVar20 = plVar17;
      }
      plVar19 = plVar22;
      if (plVar22 < plVar20) {
        plVar13 = plVar22;
        if ((*pbVar6 & 1) == 0) {
          plVar15 = (locale *)(pbVar6 + 1);
        }
        else {
          plVar15 = *(locale **)(pbVar6 + 0x10);
        }
        do {
          plVar19 = plVar13;
          if (plVar13[lVar23] != *plVar15) break;
          plVar13 = plVar13 + 1;
          plVar15 = plVar15 + 1;
          plVar19 = plVar20;
        } while (plVar13 < plVar20);
      }
      if (plVar19 < plVar17) {
        plVar22 = plVar19;
      }
      std::string::assign((char *)plVar15,(ulong)plVar22);
      piVar5 = *(id **)(local_128[0] + -0x18);
      iVar10 = *(int *)(aiStack_98 + (int64_t)piVar5);
      plVar15 = (locale *)piVar5;
      if (iVar10 == -1) {
        piVar14 = piVar5;
        std::ios_base::getloc();
        plVar11 = (int64_t *)std::locale::use_facet(piVar14);
        plVar15 = (locale *)*plVar11;
        cVar9 = (**(code **)(plVar15 + 0x38))();
        std::locale::~locale(plVar15);
        iVar10 = (int)cVar9;
        *(int *)(aiStack_98 + (int64_t)piVar5) = iVar10;
      }
      std::string::append((ulong)plVar15,(char)iVar10);
      std::string::append((char *)plVar15,(ulong)plVar17 - (ulong)plVar22);
    }
    std::ostream::~ostream((ostream *)plVar15);
    if (local_118 != (int64_t *)0x0) {
      LOCK();
      plVar11 = local_118 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)(*local_118 + 0x10))();
        LOCK();
        piVar1 = (int *)((int64_t)local_118 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_118 + 0x18))();
        }
      }
    }
    std::ios::~ios((ios *)plVar15);
  }
LAB_0094b602:
  FUN_009b28e0();
  std::ostream::~ostream((ostream *)plVar15);
  if (local_1c8 != (int64_t *)0x0) {
    LOCK();
    plVar11 = local_1c8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)(*local_1c8 + 0x10))();
      LOCK();
      piVar1 = (int *)((int64_t)local_1c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1c8 + 0x18))();
      }
    }
  }
  std::ios::~ios((ios *)plVar15);
  return;
}

