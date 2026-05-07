// Function: FUN_014f38a0
// Address: 014f38a0
// Size: 736 bytes
// Class: Unknown

void* FUN_014f38a0(uint64_t param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  int64_t *arg1;
  void*this_ptr;
  void*puVar9;
  int64_t lVar10;
  int64_t local_68;
  char local_60 [8];
  int64_t local_58;
  char local_50;
  int local_44;
  char local_38 [8];
  
  iVar2 = FUN_014c2f20();
  if ((param_2 < iVar2) || (iVar2 = FUN_014c2f80(), iVar2 < param_2)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_44 = FUN_014c2f20();
    local_44 = param_2 - local_44;
    if (local_44 < *(int *)(arg1[0x21] + 0xc)) {
      puVar4 = (void*)0x0;
      bVar1 = false;
      do {
        FUN_00d23340();
        local_38[0] = local_60[0];
        pcVar8 = local_38;
        pcVar3 = local_60;
        if (local_60[0] == '\0') {
          pcVar3 = pcVar8;
        }
        *pcVar3 = '\0';
        if ((local_60[0] != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        pVar7 = (void*)pcVar8;
        if ((local_38[0] == '\0') && (local_68 != 0)) {
          FUN_00d50b00();
        }
        if (puVar4 == (void*)0x0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_010fe5f0();
          *puVar4 = &g_025e7818;
          puVar4[7] = &g_025e7c80;
          puVar4[0x27] = 0;
          puVar4[0x28] = 0;
          *(void*)((int64_t)puVar4 + 0x141) = 0;
          *(void*)((int64_t)puVar4 + 0x149) = 0;
          *(void*)((int64_t)puVar4 + 0x154) = 0;
          *(void*)((int64_t)puVar4 + 0x15c) = 0;
          FUN_00d500e0();
          pvVar5 = _pthread_getspecific(pVar7);
          if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            lVar10 = arg1[0x27];
            puVar9 = puVar4;
            if (lVar10 != 0) goto LAB_014f3a43;
LAB_014f3a17:
            if (puVar9[0x27] != 0) {
              puVar9[0x27] = lVar10;
LAB_014f3a6d:
              FUN_00d50b20();
              if (lVar10 != 0) goto LAB_014f3a7a;
            }
          }
          else {
            lVar10 = arg1[0x27];
            puVar9 = (void*)puVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            if (lVar10 == 0) goto LAB_014f3a17;
LAB_014f3a43:
            FUN_00d50b00();
            lVar6 = puVar9[0x27];
            if (lVar6 != lVar10) {
              FUN_00d50b00();
              puVar9[0x27] = lVar10;
              if (lVar6 == 0) goto LAB_014f3a7a;
              goto LAB_014f3a6d;
            }
LAB_014f3a7a:
            FUN_00d50b20();
          }
          bVar1 = true;
        }
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = local_68;
        local_50 = '\0';
        FUN_014c2e20();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23740();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
      } while (local_44 < *(int *)(arg1[0x21] + 0xc));
      (**(code **)(*arg1 + 0x450))();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ef8f0();
      FUN_014ef8f0();
      *(void*)(this_ptr + 1) = 0;
      if (!bVar1) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar4 = (void*)0x0;
    }
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

