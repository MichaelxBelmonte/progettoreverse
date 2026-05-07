// Function: FUN_01273930
// Address: 01273930
// Size: 2807 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x01274378) */
/* WARNING: Removing unreachable block (ram,0x01274384) */
/* WARNING: Removing unreachable block (ram,0x01273d42) */
/* WARNING: Removing unreachable block (ram,0x01273d4e) */
/* WARNING: Removing unreachable block (ram,0x01273f72) */
/* WARNING: Removing unreachable block (ram,0x01273f7e) */
/* WARNING: Removing unreachable block (ram,0x012743c4) */
/* WARNING: Removing unreachable block (ram,0x012743d4) */

undefined8 * FUN_01273930(pthread_key_t param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  int iVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  char local_40 [8];
  char local_38 [8];
  longlong lVar11;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    local_98 = plVar3;
    FUN_00d23310();
    puVar6 = local_88;
    local_48 = (undefined8 *)CONCAT71(local_48._1_7_,(char)local_80);
    ppuVar8 = &local_48;
    if ((char)local_80 != '\0') {
      ppuVar8 = &local_80;
    }
    *(undefined1 *)ppuVar8 = 0;
    if (((char)local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      lVar5 = puVar6[9];
    }
    else {
      lVar5 = *(longlong *)(puVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x48);
    }
    if (lVar5 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (puVar6 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar5 == 0) {
      FUN_01273200();
      local_50 = local_88;
      if (((char)local_80 == '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c9fe20();
      puVar6 = local_88;
      ppuVar8 = &local_80;
      if ((char)local_80 == '\0') {
        ppuVar8 = (undefined8 **)&local_60;
      }
      local_60 = (char)local_80;
      *(undefined1 *)ppuVar8 = 0;
      if (((char)local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_60 == '\0') {
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_012e8850();
      puVar7 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (undefined8 *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar7 == (undefined8 *)0x0) {
        *unaff_RDI = plVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        local_80._0_1_ = '\0';
        local_88 = (undefined8 *)0x0;
        local_78 = puVar7;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)((longlong)puVar7 + 0xc)) {
          lVar5 = 0;
          do {
            local_88 = *(undefined8 **)(puVar7[2] + lVar5 * 8);
            FUN_00805b20();
            lVar11 = CONCAT71(uStack_5f,local_60);
            if (local_58 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00c9fe20();
            puVar6 = local_48;
            local_38[0] = local_40[0];
            pcVar9 = local_40;
            if (local_40[0] == '\0') {
              pcVar9 = local_38;
            }
            *pcVar9 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_c0 = 0;
            if (local_38[0] == '\0') {
              if (puVar6 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_c0 = '\x01';
            local_c8 = puVar6;
            FUN_012fceb0();
            lVar1 = CONCAT71(local_d8._1_7_,(char)local_d8);
            if (local_d0 == '\0') {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d0 = '\0';
            }
            FUN_01274b90();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((longlong)puVar7 + 0xc));
        }
        FUN_000be170();
        *unaff_RDI = local_98;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_00d50b20();
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      pcVar2 = DAT_02572370;
      (*DAT_02572370)();
      local_90 = puVar6;
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar2)();
      local_50 = puVar7;
      if ((undefined8 *)*unaff_RSI != (undefined8 *)0x0) {
        local_80._0_1_ = '\0';
        local_88 = (undefined8 *)0x0;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        local_78 = (undefined8 *)*unaff_RSI;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar12 = -local_70._4_4_;
            }
            else {
              iVar12 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar12);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar12 = 0;
            }
            local_70 = CONCAT44(iVar12,(int)local_70);
          }
          lVar5 = (longlong)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (*(int *)((longlong)local_78 + 0xc) <= iVar12) break;
          lVar11 = local_78[2];
          puVar6 = *(undefined8 **)(lVar11 + 8 + lVar5 * 8);
          local_88 = puVar6;
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar11);
          puVar7 = local_88;
          pVar10 = (pthread_key_t)lVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), puVar6 = puVar7, lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar7[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          if (puVar6[0x20] != 0) {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f4d60();
            puVar6 = local_48;
            local_60 = local_40[0];
            pcVar9 = local_40;
            if (local_40[0] == '\0') {
              pcVar9 = &local_60;
            }
            *pcVar9 = '\0';
            if ((local_40[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            local_48 = puVar6;
            iVar12 = FUN_00d237a0();
            if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar12 == -1) {
              local_40[0] = '\0';
              local_48 = puVar6;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              puVar7 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar7 = &DAT_02572358;
              (*pcVar2)();
              local_40[0] = '\0';
              local_48 = puVar7;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            local_48 = local_88;
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (puVar6 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_001159b0();
        puVar6 = local_90;
      }
      FUN_012e8850();
      puVar7 = local_88;
      if ((char)local_80 == '\0') {
        if (((local_88 != (undefined8 *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
           (local_88 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80._0_1_ = '\0';
      }
      if (puVar7 == (undefined8 *)0x0) {
        *unaff_RDI = plVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        local_80._0_1_ = '\0';
        local_88 = (undefined8 *)0x0;
        local_78 = puVar7;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)((longlong)puVar7 + 0xc)) {
          lVar5 = 0;
          do {
            local_88 = *(undefined8 **)(puVar7[2] + lVar5 * 8);
            local_40[0] = '\0';
            local_48 = local_88;
            iVar12 = FUN_00d23d20();
            if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            lVar11 = *(longlong *)(local_90[2] + (longlong)iVar12 * 8);
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            plVar3 = local_98;
            FUN_00c9fe20();
            puVar6 = local_48;
            local_d8._0_1_ = local_40[0];
            ppuVar8 = (undefined8 **)local_40;
            if (local_40[0] == '\0') {
              ppuVar8 = &local_d8;
            }
            *(char *)ppuVar8 = '\0';
            if ((local_40[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            local_a0 = 0;
            if ((char)local_d8 == '\0') {
              if (puVar6 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d8._0_1_ = '\0';
            }
            local_a0 = '\x01';
            local_a8 = puVar6;
            FUN_012fceb0();
            local_b0 = 0;
            lVar1 = CONCAT71(uStack_5f,local_60);
            if (local_58 == '\0') {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_b0 = '\x01';
            local_b8 = lVar1;
            FUN_01274b90();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((longlong)puVar7 + 0xc));
        }
        FUN_000be170();
        *unaff_RDI = plVar3;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_00d50b20();
        puVar6 = local_90;
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return unaff_RDI;
}


