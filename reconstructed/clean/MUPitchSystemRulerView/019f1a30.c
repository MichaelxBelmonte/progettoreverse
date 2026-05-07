// Function: FUN_019f1a30
// Address: 019f1a30
// Size: 2376 bytes
// Class: MUPitchSystemRulerView

void FUN_019f1a30(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  int64_t lVar8;
  void *pvVar9;
  char *pcVar10;
  void*puVar11;
  char *pcVar12;
  void* pVar13;
  int iVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  bVar3 = true;
  if (((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) &&
     (cVar7 = (**(code **)(&UNK_000015d8 + *this_ptr))(), cVar7 != '\0')) {
    bVar3 = *(int *)(this_ptr[0x3d] + 0xc) < 2;
  }
  FUN_0199e1b0();
  FUN_00d216c0();
  (**(code **)(*this_ptr + 0xaa8))();
  FUN_00d21370();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    return;
  }
  FUN_00323290();
  plVar4 = local_70;
  if (((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  cVar7 = FUN_019a9840();
  plVar1 = (int64_t *)*arg1;
  if (cVar7 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = plVar1;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar14 = -local_58._4_4_;
          }
          else {
            iVar14 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar14);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar14 = 0;
          }
          local_58 = CONCAT44(iVar14,(int)local_58);
        }
        lVar8 = (int64_t)(int)local_58;
        iVar14 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar14);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar14) break;
        local_70 = *(int64_t **)(local_60[2] + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((void*)local_60[2]);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar1 = (int64_t *)CONCAT71(uStack_7f,local_80);
        if (local_78 == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
  }
  else if (plVar1 != (int64_t *)0x0) {
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = plVar1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar14 = -local_58._4_4_;
        }
        else {
          iVar14 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar14);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar14 = 0;
        }
        local_58 = CONCAT44(iVar14,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar14 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar14);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar14) break;
      local_70 = *(int64_t **)(local_60[2] + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((void*)local_60[2]);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      plVar1 = local_48;
      local_80 = local_40[0];
      pcVar10 = &local_80;
      pcVar12 = local_40;
      if (local_40[0] == '\0') {
        pcVar12 = pcVar10;
      }
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)pcVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      local_38[0] = local_40[0];
      pcVar10 = local_40;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
      }
      *pcVar10 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == (int64_t *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      if ((local_80 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar10 = &g_02572358;
  *puVar11 = &g_02572358;
  (*g_02572370)();
  cVar7 = FUN_019a9840();
  if (cVar7 == '\0') {
    (**(code **)(*this_ptr + 0xaa8))();
    plVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f222b;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_019f222b:
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = plVar1;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          pVar13 = (void*)pcVar10;
          plVar2 = *(int64_t **)(plVar1[2] + lVar8 * 8);
          local_70 = plVar2;
          (**(code **)(*plVar2 + 0x928))();
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar5 = local_48;
          local_38[0] = local_40[0];
          pcVar10 = local_38;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          local_40[0] = '\0';
          local_48 = plVar5;
          cVar7 = FUN_00d23d70();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar7 == '\0') {
            local_40[0] = '\0';
            local_48 = plVar2;
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((int64_t)plVar1 + 0xc));
      }
      FUN_01a02090();
      FUN_00d50b20();
      goto LAB_019f23b7;
    }
  }
  else {
    (**(code **)(*this_ptr + 0xaa8))();
    plVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f1f4a;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_019f1f4a:
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = plVar1;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          pVar13 = (void*)pcVar10;
          plVar2 = *(int64_t **)(plVar1[2] + lVar8 * 8);
          local_70 = plVar2;
          (**(code **)(*plVar2 + 0x928))();
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar5 = local_48;
          local_38[0] = local_40[0];
          pcVar10 = local_38;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar13 = (void*)pcVar10;
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4d60();
          plVar6 = local_48;
          local_80 = local_40[0];
          pcVar10 = &local_80;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 == (int64_t *)0x0) {
            local_40[0] = '\0';
            local_48 = plVar5;
            cVar7 = FUN_00d23d70();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar7 == '\0') {
              local_40[0] = '\0';
              local_48 = plVar2;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_40[0] = '\0';
            local_48 = plVar6;
            cVar7 = FUN_00d23d70();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar7 == '\0') {
              local_40[0] = '\0';
              local_48 = plVar2;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_80 != '\0') {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((int64_t)plVar1 + 0xc));
      }
      FUN_01a02090();
      FUN_00d50b20();
LAB_019f23b7:
      if (puVar11 == (void*)0x0) goto LAB_019f23cb;
    }
  }
  FUN_00d50b20();
LAB_019f23cb:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

