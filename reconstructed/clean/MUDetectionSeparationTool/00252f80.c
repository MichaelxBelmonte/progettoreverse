// Function: FUN_00252f80
// Address: 00252f80
// Size: 725 bytes
// Class: MUDetectionSeparationTool

uint64_t FUN_00252f80(uint64_t param_1,char param_2)

{
  char *pcVar1;
  uint64_t uVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  char *pcVar7;
  int64_t lVar8;
  bool bVar9;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar6 = local_68;
    local_78 = local_60[0];
    pcVar1 = &local_78;
    if (local_60[0] != '\0') {
      pcVar1 = local_60;
    }
    *pcVar1 = '\0';
    if ((local_60[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
      if (*(int64_t *)(this_ptr + 0x90) != 0) goto LAB_00253000;
    }
    else {
      if (local_78 == '\0') {
LAB_00253000:
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar6 = *(int64_t **)(this_ptr + 0x90);
      (**(code **)(&UNK_00001550 + *plVar6))();
      plVar5 = local_68;
      pcVar1 = local_38;
      pcVar7 = local_60;
      if (local_60[0] == '\0') {
        pcVar7 = pcVar1;
      }
      local_38[0] = local_60[0];
      *pcVar7 = '\0';
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (int64_t *)0x0) {
        plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_00253069:
        FUN_00d50b00();
      }
      else if (local_38[0] == '\0') goto LAB_00253069;
      uVar2 = (**(code **)(*plVar5 + 0x9b0))();
      lVar8 = CONCAT71(uStack_77,local_78);
      if (lVar8 == 0) {
        local_3c = (uint32_t)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
        lVar8 = 0;
      }
      else {
        if (local_70 == '\0') {
          FUN_00d50b00();
          local_3c = 0;
          if ((local_70 == '\0') || (CONCAT71(uStack_77,local_78) == 0)) goto LAB_002530d3;
          FUN_00d50b20();
        }
        else {
          local_70 = '\0';
        }
        local_3c = 0;
      }
LAB_002530d3:
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        bVar9 = *(int *)(lVar8 + 0xc) != 0;
        plVar6 = (int64_t *)CONCAT71((int7)((uint64_t)plVar5 >> 8),bVar9);
        if ((bVar9) && (param_2 != '\0')) {
          FUN_002533b0();
          plVar5 = local_68;
          if (local_60[0] == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0025314d;
            }
          }
          else if (local_68 != (int64_t *)0x0) {
LAB_0025314d:
            local_60[0] = '\0';
            local_68 = (int64_t *)0x0;
            local_58 = plVar5;
            local_48 = 0;
            local_50 = 0;
            if (0 < *(int *)((int64_t)plVar5 + 0xc)) {
              lVar8 = 0;
              do {
                plVar6 = *(int64_t **)(plVar5[2] + lVar8 * 8);
                local_68 = plVar6;
                pvVar3 = _pthread_getspecific((void*)pcVar1);
                if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                FUN_0054f740();
                lVar8 = lVar8 + 1;
                local_50 = CONCAT44(local_50._4_4_,(int)lVar8);
              } while ((int)lVar8 < *(int *)((int64_t)plVar5 + 0xc));
            }
            FUN_00275ca0();
            FUN_00d50b20();
          }
          FUN_01e53c20();
          (**(code **)(*local_68 + 0x620))();
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar6 = (int64_t *)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
        }
        if ((char)local_3c == '\0') {
          FUN_00d50b20();
        }
        goto LAB_00253244;
      }
    }
  }
  plVar6 = (int64_t *)0x0;
LAB_00253244:
  return (uint64_t)plVar6 & 0xffffffff;
}

