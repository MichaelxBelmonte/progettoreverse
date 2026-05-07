// Function: FUN_0126b620
// Address: 0126b620
// Size: 1315 bytes
// Class: MUSampledFunction

void FUN_0126b620(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  bool bVar6;
  uint64_t uVar7;
  double dVar8;
  double dVar9;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a0;
  int64_t local_80;
  char local_78;
  double local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  double local_48;
  int64_t *local_40;
  
  FUN_0125e7c0();
  if (local_68 == (int64_t *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_0125e7c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    bVar6 = local_80 != 0;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    FUN_0125e7c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013ddeb0();
    local_40 = local_68;
    if (local_68 == (int64_t *)0x0) {
      bVar6 = true;
      local_40 = (int64_t *)0x0;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar6 = false;
    }
    else {
      bVar6 = false;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_000bea40();
      (**(code **)(*plVar3 + 0x18))();
      local_70 = 0.0;
      local_a0 = 0;
      do {
        if ((local_70 != g_02390448) || (dVar8 = local_70, NAN(local_70) || NAN(g_02390448))) {
          dVar9 = local_70 + g_024113c8;
          dVar8 = *(double *)(this_ptr + 0xf0);
          if (*(double *)(this_ptr + 0xf0) < dVar9) goto LAB_0126b891;
          plVar5 = *(int64_t **)(this_ptr + 0xd0);
          pvVar2 = _pthread_getspecific((void*)local_68);
          if (pvVar2 != (void *)0x0) {
            plVar5 = *(int64_t **)(this_ptr + 0xd0);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          uVar7 = (**(code **)(*plVar5 + 0x3b8))(dVar9);
          pvVar2 = _pthread_getspecific((void*)local_68);
          plVar5 = local_40;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            local_68 = local_40;
            plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          local_48 = (double)(**(code **)(*plVar5 + 0x3a8))(local_a0,uVar7);
          plVar5 = *(int64_t **)(this_ptr + 0x188);
          pvVar2 = _pthread_getspecific((void*)local_68);
          if (pvVar2 != (void *)0x0) {
            plVar5 = *(int64_t **)(this_ptr + 0x188);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          dVar8 = (double)(**(code **)(*plVar5 + 0x380))(local_70);
          local_48 = local_48 * dVar8;
          local_a0 = uVar7;
        }
        else {
LAB_0126b891:
          local_70 = dVar8;
          local_48 = 0.0;
        }
        pvVar2 = _pthread_getspecific((void*)local_68);
        plVar5 = plVar3;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar5 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x418))(local_70,local_48);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        local_70 = local_70 + g_024113c8;
      } while (local_70 < *(double *)(this_ptr + 0xf0));
      pvVar2 = _pthread_getspecific((void*)local_68);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
      plVar5 = (int64_t *)(this_ptr + 0x168);
      FUN_00d64850();
      plVar1 = (int64_t *)*plVar5;
      if (plVar1 != plVar3) {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *plVar5 = (int64_t)plVar3;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        FUN_00e8b990();
        lVar4 = *plVar5;
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00cb00c0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar6) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

