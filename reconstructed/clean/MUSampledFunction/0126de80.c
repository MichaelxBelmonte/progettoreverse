// Function: FUN_0126de80
// Address: 0126de80
// Size: 2095 bytes
// Class: MUSampledFunction

void FUN_0126de80(void* param_1)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_78;
  double local_68;
  int64_t local_58;
  char local_50;
  double local_48;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eca90();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d6f370();
  lVar4 = g_027bebe0;
  if (g_027bebe0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00d70d40(0);
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(local_58 + 0xc);
  if (0 < (int)uVar1) {
    dVar6 = (double)(~-(uint64_t)(dVar6 == 0.0) & (uint64_t)dVar6 |
                    g_023908d0 & -(uint64_t)(dVar6 == 0.0));
    lVar3 = (uint64_t)(uVar1 - 1) << 3;
    lVar5 = 0;
    lVar4 = lVar3;
    do {
      dVar7 = g_0238fee8;
      if ((lVar5 != 0) && (lVar3 != lVar5)) {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        dVar7 = g_0238fee8 / ((dVar7 - dVar8) / (dVar9 - dVar10));
      }
      if (lVar5 == 0) {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c830(g_0240cfe0);
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c880(dVar7 * g_0240cfe0);
      }
      else {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faf20();
        dVar8 = dVar8 - dVar9;
        dVar10 = dVar10 - dVar11;
        dVar9 = dVar6 * dVar8;
        local_78 = (SQRT(dVar10 * dVar10 + dVar8 * dVar8) * dVar6) /
                   SQRT(dVar7 * dVar7 + g_0238fee8);
        local_68 = dVar7 * local_78;
        if (local_78 <= dVar9) {
          if (dVar10 * dVar6 < local_68) goto LAB_0126e333;
        }
        else {
          local_68 = (local_68 * dVar9) / local_78;
          local_78 = dVar9;
          if (dVar10 * dVar6 < local_68) {
LAB_0126e333:
            local_78 = (local_78 * dVar10 * dVar6) / local_68;
            local_68 = dVar10 * dVar6;
          }
        }
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c830((uint64_t)local_78 ^ g_023945b0);
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c880((uint64_t)local_68 ^ g_023945b0);
      }
      if (lVar3 == lVar5) {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c8d0(g_0240cfe8);
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c920(dVar7 * g_0240cfe8);
      }
      else {
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faf20();
        dVar8 = dVar8 - dVar9;
        dVar10 = dVar10 - dVar11;
        dVar9 = dVar6 * dVar8;
        local_48 = (SQRT(dVar10 * dVar10 + dVar8 * dVar8) * dVar6) /
                   SQRT(dVar7 * dVar7 + g_0238fee8);
        local_68 = dVar7 * local_48;
        if (local_48 <= dVar9) {
          if (dVar10 * dVar6 < local_68) goto LAB_0126e663;
        }
        else {
          local_68 = (local_68 * dVar9) / local_48;
          local_48 = dVar9;
          if (dVar10 * dVar6 < local_68) {
LAB_0126e663:
            local_48 = (local_48 * dVar10 * dVar6) / local_68;
            local_68 = dVar10 * dVar6;
          }
        }
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c8d0(local_48);
        pvVar2 = _pthread_getspecific((void*)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c920(local_68);
      }
      lVar5 = lVar5 + 8;
    } while ((uint64_t)uVar1 << 3 != lVar5);
  }
  FUN_00d50b20();
  return;
}

