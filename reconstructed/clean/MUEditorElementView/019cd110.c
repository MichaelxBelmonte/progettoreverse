// Function: FUN_019cd110
// Address: 019cd110
// Size: 2069 bytes
// Class: MUEditorElementView

uint64_t FUN_019cd110(void* param_1,char param_2)

{
  void*puVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  void*puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *this_ptr;
  int iVar11;
  uint8_t local_c0 [4];
  int local_bc;
  uint32_t local_84;
  void*local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  uint64_t local_48;
  char local_40;
  uint8_t local_31;
  
  (**(code **)(*this_ptr + 0xe20))();
  lVar2 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_31 = *(int *)(lVar2 + 0xc) == 0;
  if ((!(bool)local_31) && (param_2 != '\0')) {
    (**(code **)(*this_ptr + 0xa00))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar6 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_50 = lVar6;
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_84 = 0xffffffff;
    local_70 = '\0';
    local_78 = 0;
    local_68 = lVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_80 = puVar5;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar10 = -local_60._4_4_;
        }
        else {
          iVar10 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar10 = 0;
        }
        local_60 = CONCAT44(iVar10,(int)local_60);
      }
      lVar6 = (int64_t)(int)local_60;
      iVar10 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar10);
      if (*(int *)(local_68 + 0xc) <= iVar10) break;
      lVar9 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar9);
      pVar8 = (void*)lVar9;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019cd360;
        }
      }
      else if (local_48 != 0) {
LAB_019cd360:
        pvVar4 = _pthread_getspecific(pVar8);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar8 = (void*)local_50;
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507970();
        FUN_016caaa0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016cae50(&local_84,&local_48);
        iVar10 = *(int *)(local_80 + 3);
        iVar11 = iVar10 + 7;
        if (-1 < iVar10) {
          iVar11 = iVar10;
        }
        if (7 < iVar10) {
          iVar11 = iVar11 >> 3;
          lVar6 = local_80[2];
          do {
            if (((*(int *)(lVar6 + 4) != 0) && (local_48._4_4_ != 0)) &&
               (cVar3 = FUN_00e7c000(), cVar3 != '\0')) goto LAB_019cd280;
            lVar6 = lVar6 + 8;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar10 = *(int *)(local_80 + 3);
        }
        FUN_00c8e340();
        *(int64_t *)(local_80[2] + (int64_t)iVar10) = local_48;
LAB_019cd280:
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    lVar6 = local_50;
    local_31 = *(int *)(local_80 + 3) + 7U < 0xf;
    if (*(int *)(local_80 + 3) + 7U < 0xf) {
LAB_019cd931:
      uVar7 = FUN_00d50b20();
    }
    else {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02572358;
      (*g_02572370)();
      (**(code **)(*this_ptr + 0x9b0))();
      lVar9 = local_78;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019cd5ee;
        }
      }
      else if (local_78 != 0) {
LAB_019cd5ee:
        local_70 = '\0';
        local_78 = 0;
        local_68 = lVar9;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_60._4_4_ = 0;
        while( true ) {
          if (local_60._4_4_ != 0) {
            if (local_60._4_4_ < 1) {
              iVar10 = -local_60._4_4_;
            }
            else {
              iVar10 = (int)local_60 - local_60._4_4_;
              local_60 = CONCAT44(local_60._4_4_,iVar10);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar10 = 0;
            }
            local_60 = CONCAT44(iVar10,(int)local_60);
          }
          lVar6 = (int64_t)(int)local_60;
          iVar10 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (*(int *)(local_68 + 0xc) <= iVar10) break;
          lVar9 = *(int64_t *)(local_68 + 0x10);
          local_78 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
          pvVar4 = _pthread_getspecific((void*)lVar9);
          pVar8 = (void*)lVar9;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_019cd700;
            }
          }
          else if (local_48 != 0) {
LAB_019cd700:
            pvVar4 = _pthread_getspecific(pVar8);
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              pVar8 = (void*)local_50;
            }
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507970();
            FUN_016caaa0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016cae50(&local_84,local_c0);
            iVar10 = *(int *)(local_80 + 3);
            iVar11 = iVar10 + 7;
            if (-1 < iVar10) {
              iVar11 = iVar10;
            }
            if (7 < iVar10) {
              iVar11 = iVar11 >> 3;
              lVar6 = local_80[2];
              do {
                if (((*(int *)(lVar6 + 4) != 0) && (local_bc != 0)) &&
                   (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
                  local_48 = local_78;
                  local_40 = '\0';
                  FUN_00d21140();
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  break;
                }
                lVar6 = lVar6 + 8;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
        lVar6 = local_50;
      }
      uVar7 = (**(code **)(*this_ptr + 0xdc8))();
      puVar1 = local_80;
      if (puVar5 != (void*)0x0) {
        uVar7 = FUN_00d50b20();
      }
      if (puVar1 != (void*)0x0) goto LAB_019cd931;
    }
    if (lVar6 != 0) {
      uVar7 = FUN_00d50b20();
    }
    if (lVar2 == 0) goto LAB_019cd953;
  }
  uVar7 = FUN_00d50b20();
LAB_019cd953:
  return CONCAT71((int7)((uint64_t)uVar7 >> 8),local_31) ^ 1;
}

