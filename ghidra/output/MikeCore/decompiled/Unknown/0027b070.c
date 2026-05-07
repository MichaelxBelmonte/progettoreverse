// Function: FUN_0027b070
// Address: 0027b070
// Size: 1996 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0027b1f6) */
/* WARNING: Removing unreachable block (ram,0x0027b15b) */
/* WARNING: Removing unreachable block (ram,0x0027b164) */
/* WARNING: Removing unreachable block (ram,0x0027b188) */
/* WARNING: Removing unreachable block (ram,0x0027b191) */
/* WARNING: Removing unreachable block (ram,0x0027b25e) */
/* WARNING: Removing unreachable block (ram,0x0027b267) */
/* WARNING: Removing unreachable block (ram,0x0027b1b3) */
/* WARNING: Removing unreachable block (ram,0x0027b1bc) */
/* WARNING: Removing unreachable block (ram,0x0027b112) */
/* WARNING: Removing unreachable block (ram,0x0027b11b) */
/* WARNING: Removing unreachable block (ram,0x0027b3e6) */
/* WARNING: Removing unreachable block (ram,0x0027b3f3) */
/* WARNING: Removing unreachable block (ram,0x0027b417) */
/* WARNING: Removing unreachable block (ram,0x0027b440) */
/* WARNING: Removing unreachable block (ram,0x0027b2de) */
/* WARNING: Removing unreachable block (ram,0x0027b300) */
/* WARNING: Removing unreachable block (ram,0x0027b2e0) */
/* WARNING: Removing unreachable block (ram,0x0027b302) */
/* WARNING: Removing unreachable block (ram,0x0027b419) */
/* WARNING: Removing unreachable block (ram,0x0027b442) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0027b070(char param_1,undefined8 *param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  int iVar8;
  undefined *puVar9;
  byte bVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  longlong local_90;
  char local_88;
  undefined *local_60;
  char local_58;
  int local_48;
  byte local_31;
  
  lVar11 = DAT_026e1810;
  puVar7 = (undefined *)(ulonglong)unaff_ESI;
  local_98 = param_2;
  if (DAT_026e1810 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  puVar6 = (undefined *)0xaaaaaaaaaaaaaaab;
  FUN_0071a120();
  if ((local_58 == '\0') && (local_60 != (undefined *)0x0)) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_58 == '\0') {
    if (local_60 != (undefined *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_60 != (undefined *)0x0) {
    local_58 = '\0';
    local_31 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  FUN_0141b540();
  local_88 = 0;
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_90 = lVar11;
  FUN_0027baf0();
  if ((local_58 == '\0') && (local_60 != (undefined *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  bVar10 = local_60 != (undefined *)0x0 & local_31;
  if ((param_1 != '\0') && (local_60 != (undefined *)0x0)) {
    local_48 = -1;
    if (bVar10 == 0) {
      bVar1 = false;
      while (local_48 = local_48 + 1, local_48 < *(int *)(local_60 + 0xc)) {
        pVar5 = (pthread_key_t)*(undefined8 *)(local_60 + 0x10);
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0141ba80();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_0141baa0();
          if (cVar2 == '\0') {
            local_e8 = *unaff_RDI;
            local_e0 = 0;
            FUN_0027bbe0(puVar7,&local_e8,param_3);
            puVar7 = (undefined *)(ulonglong)((int)puVar7 + 1);
            bVar1 = true;
          }
        }
      }
    }
    else {
      bVar1 = false;
      while (local_48 = local_48 + 1, local_48 < *(int *)(local_60 + 0xc)) {
        pvVar3 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_60 + 0x10));
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0141ba80();
        if (cVar2 != '\0') {
          local_e8 = *unaff_RDI;
          local_e0 = 0;
          FUN_0027bbe0(puVar7,&local_e8,param_3);
          puVar7 = (undefined *)(ulonglong)((int)puVar7 + 1);
          bVar1 = true;
        }
      }
    }
    puVar6 = local_60;
    FUN_002a08f0();
    if (bVar1) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_026846d0;
      puVar6 = &DAT_02684a60;
      puVar4[2] = &DAT_02684a60;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x3a) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x42) = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined2 *)(puVar4 + 0xe) = 0;
      (*DAT_026846e8)();
      uVar12 = FUN_01d66c80();
      local_a0 = '\0';
      local_a8 = puVar4;
      FUN_01d5d7f0(uVar12,puVar7);
      if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      puVar7 = (undefined *)(ulonglong)((int)puVar7 + 1);
    }
  }
  if (local_60 != (undefined *)0x0) {
    if (bVar10 == 0) {
      if (0 < *(int *)(local_60 + 0xc)) {
        lVar11 = 0;
        do {
          uVar12 = *(undefined8 *)(*(longlong *)(local_60 + 0x10) + lVar11 * 8);
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_0141ba80();
          puVar9 = puVar7;
          if (cVar2 == '\0') {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_0141baa0();
            if (cVar2 == '\0') {
              local_d0 = 0;
              local_c8 = *local_98;
              local_c0 = 0;
              local_b8 = *unaff_RDI;
              local_b0 = 0;
              iVar8 = (int)puVar7;
              local_d8 = uVar12;
              FUN_0027bbe0(puVar7,&local_b8,param_3);
              puVar9 = (undefined *)(ulonglong)(iVar8 + 1);
              puVar6 = puVar7;
            }
          }
          lVar11 = lVar11 + 1;
          puVar7 = puVar9;
        } while ((int)lVar11 < *(int *)(local_60 + 0xc));
      }
    }
    else if (0 < *(int *)(local_60 + 0xc)) {
      lVar11 = 0;
      do {
        uVar12 = *(undefined8 *)(*(longlong *)(local_60 + 0x10) + lVar11 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0141ba80();
        puVar9 = puVar7;
        if (cVar2 == '\0') {
          local_d0 = 0;
          local_c8 = *local_98;
          local_c0 = 0;
          local_b8 = *unaff_RDI;
          local_b0 = 0;
          iVar8 = (int)puVar7;
          local_d8 = uVar12;
          FUN_0027bbe0(puVar7,&local_b8,param_3);
          puVar9 = (undefined *)(ulonglong)(iVar8 + 1);
          puVar6 = puVar7;
        }
        lVar11 = lVar11 + 1;
        puVar7 = puVar9;
      } while ((int)lVar11 < *(int *)(local_60 + 0xc));
    }
    FUN_002a08f0();
    FUN_00d50b20();
  }
  return;
}


