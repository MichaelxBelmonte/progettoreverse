// Function: FUN_01a93060
// Address: 01a93060
// Size: 1276 bytes
// Class: MUAudioSourceSeparationPrefCtrl

int64_t FUN_01a93060(void)

{
  int64_t *plVar1;
  double *pdVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  int64_t lVar9;
  int64_t local_68;
  char local_60;
  
  if ((char)this_ptr[4] == '\0') {
    lVar9 = FUN_00e7c860();
    return lVar9;
  }
  if (((double)this_ptr[6] != 0.0) || (NAN((double)this_ptr[6]))) goto LAB_01a93548;
  (**(code **)(*this_ptr + 0x388))();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  dVar8 = (double)(**(code **)(*(int64_t *)this_ptr[2] + 0x378))();
  lVar9 = g_027e2ad0;
  plVar1 = this_ptr + 2;
  if (g_0241c420 <= dVar8) {
    dVar8 = (double)(**(code **)(*(int64_t *)*plVar1 + 0x378))();
    lVar9 = g_027e2ae0;
    lVar3 = g_027e2ad8;
    if (g_0241c428 <= dVar8) {
      if (g_027e2ae0 == 0) goto LAB_01a93168;
      FUN_00d50b00();
    }
    else if (g_027e2ad8 == 0) {
LAB_01a93168:
      lVar9 = 0;
    }
    else {
      FUN_00d50b00();
      lVar9 = lVar3;
    }
  }
  else {
    if (g_027e2ad0 == 0) goto LAB_01a93168;
    FUN_00d50b00();
  }
  fVar5 = (float)FUN_01d43d10();
  fVar6 = (float)(**(code **)(*(int64_t *)this_ptr[2] + 0x390))
                           (SUB84((double)this_ptr[7] + g_0238fee8,0));
  pdVar2 = (double *)(this_ptr + 7);
  fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
  fVar5 = fVar5 * g_02394244;
  if (fVar6 - fVar7 <= fVar5) {
    fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_023b2c70,0));
    fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
    lVar3 = 1;
    if (fVar5 < fVar6 - fVar7) {
LAB_01a93517:
      lVar4 = lVar3;
    }
    else {
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_02411100,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 2;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_0241eeb8,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 3;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_02394de0,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 4;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_023b4df8,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 5;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_02395720,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 6;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_0241c430,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 7;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_024119d0,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 8;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_0241c438,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 9;
      lVar4 = 10;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
    }
    dVar8 = (double)*(int *)(&g_0241c440 + lVar4 * 4);
LAB_01a93529:
    this_ptr[6] = (int64_t)dVar8;
  }
  else {
    dVar8 = (double)FUN_00e7c860();
    this_ptr[6] = (int64_t)dVar8;
    fVar5 = (float)(**(code **)(*(int64_t *)this_ptr[2] + 0x390))
                             (SUB84(dVar8 + (double)this_ptr[7],0));
    fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
    dVar8 = g_0238fee8;
    if (fVar5 - fVar6 < g_023908d8) goto LAB_01a93529;
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
LAB_01a93548:
  return this_ptr[6];
}

