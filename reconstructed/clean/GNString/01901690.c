// Function: FUN_01901690
// Address: 01901690
// Size: 1450 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01901690(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  void*this_ptr;
  int64_t lVar11;
  undefined7 uVar12;
  double dVar13;
  int64_t local_a8;
  uint8_t local_a0;
  double local_90;
  uint32_t local_7c;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t local_48;
  double local_40;
  uint local_34;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  local_78 = puVar3;
  (*g_02572370)();
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *this_ptr = local_78;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  FUN_00d21370();
  if (*param_2 == 0) {
    local_7c = 0xffffffff;
    bVar1 = true;
    local_34 = 0;
    local_48 = 0;
    bVar2 = false;
    bVar8 = false;
  }
  else {
    local_68 = '\0';
    local_70 = 0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_90 = g_023b4830;
    local_40 = g_023b2568;
    local_58._4_4_ = 0;
    local_34 = 0;
    lVar4 = 0;
    bVar2 = false;
    lVar11 = 0;
    puVar3 = this_ptr;
    local_60 = *param_2;
    while( true ) {
      local_48 = lVar4;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar10 = -local_58._4_4_;
        }
        else {
          iVar10 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar10 = 0;
        }
        local_58 = CONCAT44(iVar10,(int)local_58);
      }
      lVar4 = (int64_t)(int)local_58;
      iVar10 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar10);
      if (*(int *)(local_60 + 0xc) <= iVar10) break;
      lVar7 = *(int64_t *)(local_60 + 0x10);
      local_70 = *(int64_t *)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01907950();
      if (dVar13 < local_40) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_01907950();
        lVar4 = local_70;
        if (lVar11 == local_70) {
          if ((!bVar2) && (lVar11 != 0)) {
            lVar4 = lVar11;
            if (local_68 != '\0') goto LAB_019018bd;
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (lVar11 != 0)) {
              FUN_00d50b20();
              bVar2 = true;
              lVar11 = lVar4;
              goto LAB_019018c7;
            }
          }
          else {
            if ((bVar2) && (lVar11 != 0)) {
              FUN_00d50b20();
            }
LAB_019018bd:
            local_68 = '\0';
          }
          bVar2 = true;
          lVar11 = lVar4;
        }
      }
LAB_019018c7:
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01907950();
      if (dVar13 <= local_90) {
        puVar3 = (void*)(uint64_t)local_34;
        lVar4 = local_48;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = (double)FUN_01907950();
        lVar4 = local_48;
        lVar7 = local_70;
        uVar12 = (undefined7)((uint64_t)puVar3 >> 8);
        if (local_48 == local_70) {
          if (((char)local_34 == '\0') && (local_48 != 0)) {
            lVar7 = local_48;
            if (local_68 != '\0') goto LAB_019019b9;
            puVar3 = (void*)CONCAT71(uVar12,1);
            local_34 = 0;
            FUN_00d50b00();
          }
          else {
            puVar3 = (void*)(uint64_t)local_34;
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          puVar3 = (void*)CONCAT71(uVar12,1);
          lVar4 = lVar7;
          if (((char)local_34 != '\0') && (local_48 != 0)) {
            local_48 = lVar7;
            FUN_00d50b20();
          }
        }
        else {
          if (((char)local_34 != '\0') && (local_48 != 0)) {
            local_48 = local_70;
            FUN_00d50b20();
          }
LAB_019019b9:
          local_68 = '\0';
          puVar3 = (void*)CONCAT71(uVar12,1);
          lVar4 = lVar7;
        }
      }
      local_34 = (uint)puVar3;
    }
    FUN_000beb10();
    local_7c = 0xffffffff;
    bVar9 = bVar2;
    if ((bVar2) && (lVar11 != 0)) {
      FUN_00d50b00();
    }
    else if (lVar11 == 0) {
      bVar1 = true;
      goto LAB_01901bf4;
    }
    do {
      local_68 = '\0';
      local_70 = lVar11;
      FUN_00d21140();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == lVar11) {
        bVar1 = false;
        goto LAB_01901bf4;
      }
      local_a0 = 0;
      local_a8 = lVar11;
      FUN_01900ec0(&local_7c,&local_a8);
      lVar4 = local_70;
      if (local_70 == lVar11) {
        lVar4 = lVar11;
        if ((bVar9) || (lVar11 == 0)) {
          bVar8 = bVar9;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 != '\0') goto LAB_01901ad9;
          FUN_00d50b00();
          bVar8 = true;
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        bVar8 = true;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
      else {
        if (bVar9) {
          FUN_00d50b20();
        }
LAB_01901ad9:
        local_68 = '\0';
        bVar8 = true;
      }
      lVar11 = lVar4;
      bVar9 = bVar8;
    } while (lVar4 != 0);
    bVar1 = false;
  }
  lVar11 = 0;
  bVar9 = bVar8;
LAB_01901bf4:
  *this_ptr = local_78;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar9) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_34 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2 && !bVar1) {
    FUN_00d50b20();
  }
  return this_ptr;
}

