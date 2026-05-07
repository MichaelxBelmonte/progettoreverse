// Function: FUN_019c0170
// Address: 019c0170
// Size: 1423 bytes
// Class: MUEditorElementView


void FUN_019c0170(longlong *param_1,longlong *param_2)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  int iVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  local_38 = param_1;
  cVar1 = FUN_019a9840();
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar3 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else if (*(int *)(*param_2 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d23310();
    pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_c8);
    plVar8 = &local_60;
    if ((char)local_c8 != '\0') {
      plVar8 = &local_c8;
    }
    local_60 = CONCAT71(local_60._1_7_,(char)local_c8);
    *(undefined1 *)plVar8 = 0;
    if (((char)local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar9);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    if (((char)local_60 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_a0 = '\0';
      local_a8 = (longlong *)0x0;
      FUN_00cb1fa0();
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        (**(code **)(*local_a8 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    lVar3 = *param_2;
    local_88 = puVar4;
    if (lVar3 != 0) {
      local_c8._0_1_ = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = lVar3;
      if (0 < *(int *)(lVar3 + 0xc)) {
        pVar9 = 0;
        do {
          pVar7 = pVar9;
          pvVar2 = _pthread_getspecific(pVar9);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          local_80 = local_60;
          if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (*local_38 == 0) {
            uVar5 = (**(code **)(*unaff_RSI + 0x988))();
            lVar11 = local_60;
            if (local_60 == 0) {
              local_78 = 0;
              lVar11 = 0;
            }
            else {
              local_78 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
              if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            lVar11 = *(longlong *)(*local_38 + 0x10);
            if (lVar11 == 0) {
              lVar11 = 0;
              local_78 = 0;
            }
            else {
              uVar5 = FUN_00d50b00();
              local_78 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            }
          }
          pvVar2 = _pthread_getspecific(pVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01299fe0();
          lVar6 = local_60;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_019c0500;
            }
          }
          else if (local_60 != 0) {
LAB_019c0500:
            local_58 = '\0';
            local_60 = 0;
            local_50 = lVar6;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar10 = -local_48._4_4_;
                }
                else {
                  iVar10 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar10);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar10 = 0;
                }
                local_48 = CONCAT44(iVar10,(int)local_48);
              }
              lVar6 = (longlong)(int)local_48;
              iVar10 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              if (*(int *)(local_50 + 0xc) <= iVar10) break;
              local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar6 * 8);
              pvVar2 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_50 + 0x10));
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar6 = local_98;
              if (local_90 == '\0') {
                if (local_98 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_90 = '\0';
              }
              local_70 = lVar6;
              local_68 = '\0';
              cVar1 = FUN_00d23d70();
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 != '\0') {
                local_70 = local_60;
                local_68 = '\0';
                FUN_00d21140();
                if ((local_68 != '\0') && (local_70 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          if (((char)local_78 != '\0') && (lVar11 != 0)) {
            FUN_00d50b20();
          }
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          pVar9 = pVar9 + 1;
          local_b8 = CONCAT44(local_b8._4_4_,pVar9);
        } while ((int)pVar9 < *(int *)(lVar3 + 0xc));
      }
      FUN_001159b0();
    }
    *unaff_RDI = (longlong)local_88;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


