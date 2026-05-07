// Function: FUN_01b381a0
// Address: 01b381a0
// Size: 2227 bytes
// Class: MUScaleBrowserItem


/* WARNING: Removing unreachable block (ram,0x01b389de) */
/* WARNING: Removing unreachable block (ram,0x01b389e7) */
/* WARNING: Removing unreachable block (ram,0x01b38310) */
/* WARNING: Removing unreachable block (ram,0x01b3831c) */
/* WARNING: Removing unreachable block (ram,0x01b389b6) */
/* WARNING: Removing unreachable block (ram,0x01b389c2) */
/* WARNING: Removing unreachable block (ram,0x01b38a18) */
/* WARNING: Removing unreachable block (ram,0x01b38a21) */
/* WARNING: Removing unreachable block (ram,0x01b386ca) */
/* WARNING: Removing unreachable block (ram,0x01b386d7) */
/* WARNING: Removing unreachable block (ram,0x01b38362) */
/* WARNING: Removing unreachable block (ram,0x01b3836b) */

void FUN_01b381a0(pthread_key_t param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  pthread_key_t pVar9;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong *plVar10;
  float fVar11;
  longlong *local_b8;
  char local_b0;
  float local_50;
  float local_4c;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xe0) != 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x928))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar5 = (longlong *)FUN_00e8b990();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x3c0))();
      if (cVar1 != '\0') {
        (**(code **)(*plVar5 + 0x3b8))();
        FUN_01a1d6e0();
        FUN_019f76e0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a1d6e0();
        (**(code **)(*local_b8 + 0xa28))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x930))();
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    FUN_01b27070();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01b270b0();
    plVar5 = *(longlong **)(unaff_RDI + 0xe0);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      plVar5 = *(longlong **)(unaff_RDI + 0xe0);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    plVar5 = (longlong *)*plVar5;
    uVar2 = (*(code *)plVar5[0x6e])();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
    plVar10 = local_40;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar5 = local_40;
      plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar10 + 0x370))();
    pVar8 = (pthread_key_t)plVar5;
    if (*(char *)(unaff_RDI + 0xf2) == '\0') {
      pvVar4 = _pthread_getspecific(pVar8);
      plVar10 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar5 = local_40;
        plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      pVar8 = (pthread_key_t)plVar5;
      local_50 = (float)(**(code **)(*plVar10 + 0x3a0))();
    }
    else {
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (pthread_key_t)local_40;
      }
      local_50 = (float)FUN_0173fbe0();
      uVar3 = uVar2;
    }
    FUN_01b3b230(local_50,uVar3);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pVar9 = 0x1b38d74;
    switch(*(undefined4 *)(unaff_RDI + 0xf4)) {
    case 0:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_4c = (float)FUN_0173fbe0();
      break;
    case 1:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = (float)_logf(fVar11 * DAT_02394204);
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (pthread_key_t)local_40;
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = local_4c * DAT_02394208;
      local_50 = (float)_logf(fVar11 * DAT_02394204);
      local_50 = local_50 * DAT_02394208;
      break;
    case 2:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = (float)_logf(fVar11 * DAT_02394204);
      local_4c = local_4c * DAT_02394208;
      local_50 = DAT_0241b650;
      break;
    case 3:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_50 = (float)FUN_01773e50();
      local_4c = (float)_logf(fVar11 * DAT_02394204);
      local_4c = local_4c * DAT_02394208;
      local_50 = local_50 + DAT_0241b650;
      break;
    case 4:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_4c = (float)FUN_0173fbe0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (float)FUN_0173fbe0();
      break;
    default:
      local_4c = 0.0;
      local_50 = 0.0;
    }
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173ecc0(local_50 - local_4c);
    if (unaff_SIL != '\0') {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar8 = 0x26034e8;
      *puVar7 = &DAT_026034e8;
      puVar7[0xc] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x55) = 0;
      (*DAT_02603500)();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b120();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_017aa610();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017bf8a0();
      FUN_00d50b20();
    }
    FUN_01ad60d0(unaff_SIL,2);
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}


