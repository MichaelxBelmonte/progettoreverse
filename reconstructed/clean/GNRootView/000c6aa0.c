// Function: FUN_000c6aa0
// Address: 000c6aa0
// Size: 1823 bytes
// Class: GNRootView

void FUN_000c6aa0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t *local_40;
  char local_38;
  
  plVar10 = *(int64_t **)(this_ptr + 0x158);
  (**(code **)(*plVar10 + 0x368))();
  bVar2 = true;
  if (*(int64_t *)(this_ptr + 0x168) == 0) {
    local_48 = 0;
  }
  else {
    lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x168) + 0x10);
    iVar4 = *(int *)(lVar1 + 0xc);
    if (iVar4 < 1) {
      local_48 = 0;
      bVar2 = true;
    }
    else {
      lVar9 = 0;
      local_a0 = plVar10;
      do {
        lVar8 = *(int64_t *)(lVar1 + 0x10);
        local_48 = *(int64_t *)(lVar8 + lVar9 * 8);
        if (*(int64_t *)(local_48 + 0x308) == 0) {
          FUN_0051b4f0();
          plVar3 = local_40;
          pVar7 = (void*)lVar8;
          plVar10 = (int64_t *)*param_2;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = local_48;
          if (plVar3 == plVar10) {
            FUN_00d50b00();
            plVar10 = local_a0;
            if (*(int64_t *)(lVar8 + 0x308) == 0) {
              FUN_013fb420();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00521db0();
              FUN_00757c60();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012caf10();
              local_88 = local_68;
              local_80 = 0;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_80 = '\x01';
              FUN_016cbba0();
              local_98 = local_58;
              local_90 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_90 = '\x01';
              FUN_0132d960();
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d403d0();
              lVar1 = g_027ebe30;
              if (g_027ebe30 != 0) {
                FUN_00d50b00();
              }
              FUN_013fb420();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0132d610();
              local_78 = local_58;
              local_70 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_70 = '\x01';
              local_f8 = '\0';
              local_100 = 0;
              FUN_00d40470(&local_100,&local_78,3,3);
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            plVar5 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar5 + 0x18))();
            plVar3 = g_026de560;
            lVar1 = *param_1;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
              local_e8 = '\0';
              local_f0 = lVar1;
              if (g_026de560 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar3;
              local_38 = '\0';
              FUN_00ca0840();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_e8 != '\0') && (local_f0 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar3 = g_0270b8f0;
            lVar1 = *param_3;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
              local_d8 = '\0';
              local_e0 = lVar1;
              if (g_0270b8f0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar3;
              local_38 = '\0';
              FUN_00ca0840();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d403d0();
            local_d0 = g_026de568;
            if (g_026de568 != 0) {
              FUN_00d50b00();
            }
            local_c8 = '\x01';
            local_c0 = local_48;
            local_b8 = '\0';
            local_a8 = '\0';
            local_b0 = plVar5;
            FUN_00d40470(&local_b0,&local_c0,3,3);
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00b34cb0();
            plVar3 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                (**(code **)(*local_40 + 0x10))();
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  (**(code **)(*local_40 + 0x10))();
                  FUN_00d50b20();
                }
                goto LAB_000c6ef1;
              }
            }
            else if (local_40 != (int64_t *)0x0) {
LAB_000c6ef1:
              (**(code **)(*plVar3 + 0x50))();
              (**(code **)(*plVar3 + 0x10))();
              FUN_00d50b20();
            }
            FUN_00d50b20();
            bVar2 = false;
            goto LAB_000c6f17;
          }
          iVar4 = *(int *)(lVar1 + 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      local_48 = 0;
      bVar2 = true;
      plVar10 = local_a0;
    }
  }
LAB_000c6f17:
  (**(code **)(*plVar10 + 0x378))();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

