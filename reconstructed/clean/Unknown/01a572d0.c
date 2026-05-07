// Function: FUN_01a572d0
// Address: 01a572d0
// Size: 1880 bytes
// Class: Unknown

void FUN_01a572d0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  char cVar4;
  char *pcVar5;
  void *pvVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t this_ptr;
  bool bVar10;
  uint64_t uVar11;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint local_5c;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a5a220();
  FUN_01a58dc0();
  local_58 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
    return;
  }
  uVar3 = FUN_019b43a0();
  plVar7 = local_58;
  if (*(char *)(this_ptr + 0x50) == '\0') {
    while (*(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) != 0) {
      FUN_00d23340();
      plVar7 = local_48;
      local_38[0] = local_40[0];
      pcVar5 = local_40;
      if (local_40[0] == '\0') {
        pcVar5 = local_38;
      }
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_a0 = 0;
      local_98 = '\0';
      local_90 = 0;
      local_88 = '\0';
      FUN_01a81ae0(0,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar7 = local_48;
      local_38[0] = local_40[0];
      pcVar5 = local_40;
      if (local_40[0] == '\0') {
        pcVar5 = local_38;
      }
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar7 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
    goto LAB_01a57a45;
  }
  local_5c = CONCAT31(local_5c._1_3_,uVar3);
  (**(code **)(*local_58 + 0xa60))();
  (**(code **)(*plVar7 + 0x9b8))();
  plVar7 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_50 = plVar7;
  lVar8 = *(int64_t *)(this_ptr + 0x48);
  if (0 < *(int *)(lVar8 + 0xc)) {
    uVar11 = (uint64_t)(*(int *)(lVar8 + 0xc) - 1);
    if (plVar7 != (int64_t *)0x0) {
      plVar7 = *(int64_t **)(*(int64_t *)(lVar8 + 0x10) + uVar11 * 8);
      do {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar7 + 0x928))();
        plVar7 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 == (int64_t *)0x0) goto LAB_01a57480;
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a57430:
          local_40[0] = '\0';
          local_48 = plVar7;
          cVar4 = FUN_00d24090();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            bVar10 = false;
            goto LAB_01a57493;
          }
          FUN_0198a800();
LAB_01a57514:
          FUN_00d50b20();
        }
        else {
          if (local_48 != (int64_t *)0x0) goto LAB_01a57430;
LAB_01a57480:
          bVar10 = true;
LAB_01a57493:
          local_78 = '\0';
          local_80 = 0;
          local_70 = 0;
          local_68 = '\0';
          lVar8 = 0;
          FUN_01a81ae0(0,&local_70);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(int64_t **)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar11 * 8) +
                      0x478))();
          FUN_00d23620();
          if (!bVar10) goto LAB_01a57514;
        }
        FUN_00d50b20();
        if ((int64_t)uVar11 < 1) goto LAB_01a57791;
        uVar11 = uVar11 - 1;
        lVar8 = *(int64_t *)(this_ptr + 0x48);
        plVar7 = *(int64_t **)(*(int64_t *)(lVar8 + 0x10) + uVar11 * 8);
      } while( true );
    }
    plVar7 = *(int64_t **)(*(int64_t *)(lVar8 + 0x10) + uVar11 * 8);
    while( true ) {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0x928))();
      plVar7 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_78 = '\0';
      local_80 = 0;
      local_70 = 0;
      local_68 = '\0';
      lVar8 = 0;
      FUN_01a81ae0(0,&local_70);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar11 * 8) + 0x478))
                ();
      FUN_00d23620();
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((int64_t)uVar11 < 1) break;
      uVar11 = uVar11 - 1;
      plVar7 = *(int64_t **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar11 * 8);
    }
  }
LAB_01a57791:
  plVar7 = local_58;
  (**(code **)(*local_58 + 0xa58))();
  plVar2 = local_50;
  (**(code **)(*plVar7 + 0x9b8))();
  plVar7 = local_48;
  if (plVar2 == local_48) {
LAB_01a577f7:
    plVar7 = plVar2;
    if (local_40[0] != '\0') {
LAB_01a577fd:
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar2 = plVar7;
        goto LAB_01a577f7;
      }
      if (local_40[0] == '\0') goto LAB_01a57810;
      goto LAB_01a577fd;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01a57810:
  if (plVar7 != (int64_t *)0x0) {
    local_50 = plVar7;
    if (*(int *)((int64_t)plVar7 + 0xc) < 1) {
      bVar10 = false;
    }
    else {
      lVar9 = 0;
      local_5c = (uint)((byte)local_5c ^ 1);
      bVar10 = false;
      do {
        lVar1 = *(int64_t *)(local_50[2] + lVar9 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01a57e90();
        if (local_48 == (int64_t *)0x0) {
          pvVar6 = _pthread_getspecific((void*)lVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01263cf0();
          if (cVar4 == '\0') {
            plVar7 = (int64_t *)FUN_00e8fc40();
            FUN_0086a5a0();
            (**(code **)(*plVar7 + 0x18))();
            local_c0 = 0;
            local_b8 = '\0';
            lVar8 = 0;
            FUN_01a81ae0(0,&local_c0);
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            FUN_01a87bd0();
            local_a8 = '\0';
            local_b0 = plVar7;
            (**(code **)(*local_58 + 0x450))();
            if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_0198a800();
            local_40[0] = '\0';
            local_48 = plVar7;
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar10 = true;
            FUN_00d50b20();
          }
        }
        else if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((int64_t)local_50 + 0xc));
    }
    FUN_00d50b20();
    if (bVar10) {
      (**(code **)(*local_58 + 0xb48))();
    }
  }
LAB_01a57a45:
  FUN_00d50b20();
  return;
}

