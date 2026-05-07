// Function: FUN_00621330
// Address: 00621330
// Size: 2554 bytes
// Class: GNString
// String references:
//   "%i/%i = %@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_00621330(void*param_1,char param_2)

{
  void*puVar1;
  void*puVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void *pvVar8;
  void* pVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  void*puVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int64_t local_e0;
  char local_d8;
  double local_d0;
  uint64_t local_90;
  uint32_t local_84;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  void*local_58;
  uint local_50;
  int local_4c;
  void*local_48;
  uint64_t local_40;
  uint local_38;
  
  FUN_0063f230();
  puVar1 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b00();
  }
  uVar6 = FUN_00261fb0();
  puVar2 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (void*)0x0)) {
    uVar6 = FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  local_84 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),*(int *)(puVar2 + 0xc) != 0);
  cVar4 = FUN_00212c70();
  if (cVar4 == '\0') {
    local_50 = local_50 & 0xffffff00;
    local_58 = (void*)0x0;
    local_48 = puVar2;
    local_40 = (void*)0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar7 = (int64_t)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = (void*)CONCAT44(local_40._4_4_,iVar11);
      param_1 = local_48;
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      param_1 = *(void**)(local_48 + 0x10);
      local_58 = *(void**)(param_1 + lVar7 * 8 + 8);
      pvVar8 = _pthread_getspecific((void*)param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      if (local_78 == 0) {
        bVar14 = true;
      }
      else {
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar11 = FUN_016c2e90();
        bVar14 = iVar11 == 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (bVar14) {
        local_84 = 0;
        break;
      }
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar11 = -local_40._4_4_;
        }
        else {
          local_40 = (void*)CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = (void*)CONCAT44(iVar11,(int)local_40);
      }
    }
    FUN_00115190();
  }
  local_90 = FUN_00e7bdb0();
  uVar5 = FUN_01caea40();
  if (uVar5 < 6) {
    local_90 = (uint64_t)*(uint *)(&g_023b6784 + (int64_t)(int)uVar5 * 4);
    param_1 = &g_023b679c;
    iVar11 = *(int *)(&g_023b679c + (int64_t)(int)uVar5 * 4);
    if (param_2 == '\0') goto LAB_006215d1;
LAB_00621687:
    if (((char)local_84 == '\0') || (puVar2 == (void*)0x0)) goto LAB_00621d29;
    local_50 = local_50 & 0xffffff00;
    local_58 = (void*)0x0;
    local_48 = puVar2;
    local_38 = 0;
    local_40 = (void*)0x0;
    if (0 < *(int *)(puVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_58 = *(void**)(*(int64_t *)(puVar2 + 0x10) + lVar7 * 8);
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_016cbba0();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific((void*)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016f4db0();
        FUN_00656960();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_40 = (void*)CONCAT44(local_40._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(puVar2 + 0xc));
    }
    FUN_00115190();
  }
  else {
    iVar11 = (int)(local_90 >> 0x20);
    if (param_2 != '\0') goto LAB_00621687;
LAB_006215d1:
    FUN_01caeae0();
    puVar13 = local_58;
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar13 != (void*)0x0) {
      if ((char)local_84 == '\0') {
        dVar15 = ((double)(int)local_90 * g_02395720) / (double)iVar11;
        FUN_00656660(dVar15,dVar15);
        puVar13 = local_58;
        if (local_58 == (void*)0x0) {
LAB_00621c0b:
          bVar14 = false;
          puVar13 = (void*)0x0;
        }
        else {
          bVar14 = true;
          if ((char)local_50 == '\0') {
            FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        if (puVar2 == (void*)0x0) {
          dVar15 = 0.0;
          local_d0 = g_023b2568;
        }
        else {
          local_50 = local_50 & 0xffffff00;
          local_58 = (void*)0x0;
          local_48 = puVar2;
          local_40 = (void*)0xffffffff;
          local_38 = 0;
          dVar15 = 0.0;
          local_d0 = g_023b2568;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar12 = -local_40._4_4_;
              }
              else {
                iVar12 = (int)local_40 - local_40._4_4_;
                local_40 = (void*)CONCAT44(local_40._4_4_,iVar12);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar12 = 0;
              }
              local_40 = (void*)CONCAT44(iVar12,(int)local_40);
            }
            lVar7 = (int64_t)(int)local_40;
            iVar12 = (int)local_40 + 1;
            local_40 = (void*)CONCAT44(local_40._4_4_,iVar12);
            if (*(int *)(local_48 + 0xc) <= iVar12) break;
            lVar10 = *(int64_t *)(local_48 + 0x10);
            local_58 = *(void**)(lVar10 + 8 + lVar7 * 8);
            pvVar8 = _pthread_getspecific((void*)lVar10);
            pVar9 = (void*)lVar10;
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d610();
            if (local_70 == '\0') {
              if (local_78 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d610();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar6 = FUN_016c9870();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d610();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_016c9950();
            dVar18 = (double)FUN_00656510(uVar6);
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if (local_78 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            dVar16 = dVar18;
            if (local_d0 <= dVar18) {
              dVar16 = local_d0;
            }
            dVar3 = dVar17 + dVar18;
            if (dVar17 + dVar18 <= dVar15) {
              dVar3 = dVar15;
            }
            dVar15 = dVar3;
            local_d0 = dVar16;
          }
          FUN_00115190();
        }
        FUN_00656660((local_d0 * (double)(int)local_90) / (double)iVar11,
                     (dVar15 * (double)(int)local_90) / (double)iVar11);
        puVar13 = local_58;
        if (local_58 == (void*)0x0) goto LAB_00621c0b;
        bVar14 = true;
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar6 = FUN_01caeae0();
      local_50 = 3;
      local_48 = (void*)CONCAT44(local_48._4_4_,iVar11);
      local_58 = &g_02507a68;
      local_38 = local_38 & 0xffffff00;
      local_4c = (int)local_90;
      if (puVar13 != (void*)0x0) {
        uVar6 = FUN_00d50b00();
      }
      local_38 = CONCAT31(local_38._1_3_,1);
      local_40 = puVar13;
      FUN_00d8cb40(uVar6,&local_58);
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01d64eb0();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_58 = &g_02507a68;
      if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar14) && (puVar13 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00621d29:
    if (puVar2 == (void*)0x0) goto LAB_00621d3a;
  }
  FUN_00d50b20();
LAB_00621d3a:
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return local_84;
}

