// Function: FUN_019c0170
// Address: 019c0170
// Size: 1423 bytes
// Class: MUEditorElementView

void FUN_019c0170(int64_t *param_1,int64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *plVar8;
  void* pVar9;
  int iVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t local_d0;
  int64_t local_c8;
  int64_t local_c0;
  uint64_t local_b8;
  uint32_t local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  int64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  local_38 = param_1;
  cVar1 = FUN_019a9840();
  if (cVar1 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar3 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
    }
  }
  else if (*(int *)(*param_2 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d23310();
    pVar9 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),(char)local_c8);
    plVar8 = &local_60;
    if ((char)local_c8 != '\0') {
      plVar8 = &local_c8;
    }
    local_60 = CONCAT71(local_60._1_7_,(char)local_c8);
    *(void*)plVar8 = 0;
    if (((char)local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar9);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    if (((char)local_60 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_a0 = '\0';
      local_a8 = (int64_t *)0x0;
      FUN_00cb1fa0();
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        (**(code **)(*local_a8 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    lVar3 = *param_2;
    local_88 = puVar4;
    if (lVar3 != 0) {
      local_c8._0_1_ = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = lVar3;
      if (0 < *(int *)(lVar3 + 0xc)) {
        pVar9 = 0;
        do {
          pVar7 = pVar9;
          pvVar2 = _pthread_getspecific(pVar9);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          local_80 = local_60;
          if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (*local_38 == 0) {
            uVar5 = (**(code **)(*arg1 + 0x988))();
            lVar11 = local_60;
            if (local_60 == 0) {
              local_78 = 0;
              lVar11 = 0;
            }
            else {
              local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
              if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            lVar11 = *(int64_t *)(*local_38 + 0x10);
            if (lVar11 == 0) {
              lVar11 = 0;
              local_78 = 0;
            }
            else {
              uVar5 = FUN_00d50b00();
              local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            }
          }
          pvVar2 = _pthread_getspecific(pVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01299fe0();
          lVar6 = local_60;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_019c0500;
            }
          }
          else if (local_60 != 0) {
LAB_019c0500:
            local_58 = '\0';
            local_60 = 0;
            local_50 = lVar6;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar10 = -local_48._4_4_;
                }
                else {
                  iVar10 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar10);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar10 = 0;
                }
                local_48 = CONCAT44(iVar10,(int)local_48);
              }
              lVar6 = (int64_t)(int)local_48;
              iVar10 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              if (*(int *)(local_50 + 0xc) <= iVar10) break;
              local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar6 * 8);
              pvVar2 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar6 = local_98;
              if (local_90 == '\0') {
                if (local_98 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_90 = '\0';
              }
              local_70 = lVar6;
              local_68 = '\0';
              cVar1 = FUN_00d23d70();
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 != '\0') {
                local_70 = local_60;
                local_68 = '\0';
                FUN_00d21140();
                if ((local_68 != '\0') && (local_70 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          if (((char)local_78 != '\0') && (lVar11 != 0)) {
            FUN_00d50b20();
          }
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          pVar9 = pVar9 + 1;
          local_b8 = CONCAT44(local_b8._4_4_,pVar9);
        } while ((int)pVar9 < *(int *)(lVar3 + 0xc));
      }
      FUN_001159b0();
    }
    *this_ptr = (int64_t)local_88;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

