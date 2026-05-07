// ===================================================================
// MUScaleDetectionOptionsCtrl — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 00811850
// ============================================================
// Function: FUN_00811850
// Address: 00811850
// Size: 571 bytes
// Class: MUScaleDetectionOptionsCtrl
// String references:
//   "MUScaleDetectionOptionsCtrl"

void FUN_00811850(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_110;
  int64_t local_108;
  int64_t local_f8;
  
  if ((g_02738208 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02738158 = FUN_00842350();
    g_02738140 = "MUScaleDetectionOptionsCtrl";
    g_02738148 = 200;
    g_02738150 = FUN_00844e20;
    g_02738160 = 0;
    ram_0000000002738168 = 0;
    g_02738170 = 0;
    ram_0000000002738178 = 0;
    g_02738180 = 0;
    ram_0000000002738188 = 0;
    g_02738190 = 0;
    ram_0000000002738198 = 0;
    g_027381a0 = 0;
    ram_00000000027381a8 = 0;
    g_027381b0 = 0;
    ram_00000000027381b8 = 0;
    g_027381c0 = 0;
    ram_00000000027381c8 = 0;
    g_027381d0 = 0;
    ram_00000000027381d8 = 0;
    g_027381e0 = 0;
    ram_00000000027381e8 = 0;
    g_027381f0 = 0;
    _ram_00000000027381f8 = 0;
    g_02738200 = 0;
    ___cxa_guard_release();
  }
  if (g_027381fb == '\0') {
    FUN_00811d70();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_00844ea0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b53760();
    FUN_00e87920(uVar2,0);
    FUN_01b53a30();
    if (local_f8 != 0) {
      FUN_00d50b20();
    }
    if (local_108 != 0) {
      FUN_00d50b20();
    }
    if (local_110 != 0) {
      FUN_00d50b20();
    }
    FUN_008425a0();
    FUN_008425a0();
  }
  return;
}



// ============================================================
// 01b53ad0
// ============================================================
// Function: FUN_01b53ad0
// Address: 01b53ad0
// Size: 566 bytes
// Class: MUScaleDetectionOptionsCtrl

void FUN_01b53ad0(void* param_1)

{
  void*puVar1;
  int iVar2;
  void*puVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  float fVar5;
  
  if (*arg1 != 0) {
    *(int64_t *)(this_ptr + 0x70) = *arg1;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02513f50;
    puVar3[7] = 0;
    *(void*)((int64_t)puVar3 + 0x3e) = 0;
    FUN_00d500e0();
    puVar1 = *(void**)(this_ptr + 0xc0);
    if (puVar1 == puVar3) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xc0) = puVar3;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b16fc0();
    FUN_01b56c30();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b16fd0();
    FUN_01b56d20();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01b16fe0();
    fVar5 = (float)_exp2f((float)iVar2 * g_023941f4);
    FUN_01b56d80(fVar5 * g_023941f8);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01b16ff0();
    fVar5 = (float)_exp2f((float)iVar2 * g_023941f4);
    FUN_01b56de0(fVar5 * g_023941f8);
    FUN_01acf890();
  }
  return;
}



// ============================================================
// 01b53760
// ============================================================
// Function: FUN_01b53760
// Address: 01b53760
// Size: 679 bytes
// Class: MUScaleDetectionOptionsCtrl
// String references:
//   "handleCancel"
//   "handleSheetClose"
//   "MUScaleDetectionOptionsCtrl"

void FUN_01b53760(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b4700 = "handleCancel";
      g_028b4708 = &g_02738140;
      g_028b4710 = 0;
      g_028b4718 = &g_027e4858;
      g_028b4720 = FUN_01b55560;
      g_028b4728 = 0x5c9;
      g_028b4730 = 0;
      ram_00000000028b4738 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4748 = "handleSheetClose";
      g_028b4750 = &g_02738140;
      g_028b4758 = 0;
      g_028b4760 = &g_027e4858;
      g_028b4768 = FUN_01b55560;
      g_028b4770 = 0x5d9;
      g_028b4778 = 0;
      ram_00000000028b4780 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

