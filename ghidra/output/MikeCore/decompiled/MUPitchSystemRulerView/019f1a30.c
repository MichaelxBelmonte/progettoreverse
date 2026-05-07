// Function: FUN_019f1a30
// Address: 019f1a30
// Size: 2376 bytes
// Class: MUPitchSystemRulerView


void FUN_019f1a30(void)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  void *pvVar9;
  char *pcVar10;
  undefined8 *puVar11;
  char *pcVar12;
  pthread_key_t pVar13;
  int iVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  bVar3 = true;
  if (((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) &&
     (cVar7 = (**(code **)(&UNK_000015d8 + *unaff_RDI))(), cVar7 != '\0')) {
    bVar3 = *(int *)(unaff_RDI[0x3d] + 0xc) < 2;
  }
  FUN_0199e1b0();
  FUN_00d216c0();
  (**(code **)(*unaff_RDI + 0xaa8))();
  FUN_00d21370();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    return;
  }
  FUN_00323290();
  plVar4 = local_70;
  if (((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  cVar7 = FUN_019a9840();
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar7 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
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
        lVar8 = (longlong)(int)local_58;
        iVar14 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar14);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar14) break;
        local_70 = *(longlong **)(local_60[2] + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((pthread_key_t)local_60[2]);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar1 = (longlong *)CONCAT71(uStack_7f,local_80);
        if (local_78 == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
  }
  else if (plVar1 != (longlong *)0x0) {
    local_68 = '\0';
    local_70 = (longlong *)0x0;
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
      lVar8 = (longlong)(int)local_58;
      iVar14 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar14);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar14) break;
      local_70 = *(longlong **)(local_60[2] + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)local_60[2]);
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
      if ((local_40[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)pcVar10);
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
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == (longlong *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      if ((local_80 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar10 = &DAT_02572358;
  *puVar11 = &DAT_02572358;
  (*DAT_02572370)();
  cVar7 = FUN_019a9840();
  if (cVar7 == '\0') {
    (**(code **)(*unaff_RDI + 0xaa8))();
    plVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f222b;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_019f222b:
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = plVar1;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          pVar13 = (pthread_key_t)pcVar10;
          plVar2 = *(longlong **)(plVar1[2] + lVar8 * 8);
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
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          local_40[0] = '\0';
          local_48 = plVar5;
          cVar7 = FUN_00d23d70();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar7 == '\0') {
            local_40[0] = '\0';
            local_48 = plVar2;
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_01a02090();
      FUN_00d50b20();
      goto LAB_019f23b7;
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0xaa8))();
    plVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f1f4a;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_019f1f4a:
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = plVar1;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          pVar13 = (pthread_key_t)pcVar10;
          plVar2 = *(longlong **)(plVar1[2] + lVar8 * 8);
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
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar13 = (pthread_key_t)pcVar10;
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
          if ((local_40[0] != '\0') && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 == (longlong *)0x0) {
            local_40[0] = '\0';
            local_48 = plVar5;
            cVar7 = FUN_00d23d70();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar7 == '\0') {
              local_40[0] = '\0';
              local_48 = plVar2;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_40[0] = '\0';
            local_48 = plVar6;
            cVar7 = FUN_00d23d70();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar7 == '\0') {
              local_40[0] = '\0';
              local_48 = plVar2;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_80 != '\0') {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_01a02090();
      FUN_00d50b20();
LAB_019f23b7:
      if (puVar11 == (undefined8 *)0x0) goto LAB_019f23cb;
    }
  }
  FUN_00d50b20();
LAB_019f23cb:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


