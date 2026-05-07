// Function: FUN_01670220
// Address: 01670220
// Size: 1484 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x016706bb) */
/* WARNING: Removing unreachable block (ram,0x016706c7) */

ulonglong FUN_01670220(pthread_key_t param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  uint uVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  longlong *local_a8;
  char local_a0;
  longlong *in_stack_ffffffffffffff68;
  undefined8 uVar16;
  char local_90 [8];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_6c;
  int local_68;
  int local_64;
  longlong *local_60;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  byte local_42;
  byte local_41;
  char local_40 [8];
  char local_38 [8];
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar8 = 0;
  FUN_01510360(0,0,0);
  local_40[0] = local_90[0];
  pcVar5 = local_40;
  if (local_90[0] != '\0') {
    pcVar5 = local_90;
  }
  *pcVar5 = '\0';
  plVar12 = in_stack_ffffffffffffff68;
  if ((local_90[0] != '\0') && (in_stack_ffffffffffffff68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = in_stack_ffffffffffffff68;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510360(0,0,0);
  pcVar5 = local_38;
  pcVar10 = local_90;
  if (local_90[0] == '\0') {
    pcVar10 = pcVar5;
  }
  local_38[0] = local_90[0];
  *pcVar10 = '\0';
  if ((local_90[0] != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar8 = (pthread_key_t)pcVar5;
  if (in_stack_ffffffffffffff68 == (longlong *)0x0) {
    uVar13 = 0xffffffff;
    if (plVar12 == (longlong *)0x0) goto LAB_01670357;
  }
  else {
    if (plVar12 == (longlong *)0x0) {
      uVar13 = 1;
      goto LAB_016707e3;
    }
LAB_01670357:
    local_58 = plVar12;
    pvVar4 = _pthread_getspecific(pVar8);
    plVar11 = in_stack_ffffffffffffff68;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (longlong *)in_stack_ffffffffffffff68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4]
      ;
    }
    iVar2 = (**(code **)(*plVar11 + 0x3f0))();
    pvVar4 = _pthread_getspecific(pVar8);
    plVar11 = plVar12;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar3 = (**(code **)(*plVar11 + 0x3f0))();
    uVar13 = 0xffffffff;
    if (iVar3 <= iVar2) {
      pvVar4 = _pthread_getspecific(pVar8);
      plVar11 = in_stack_ffffffffffffff68;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar11 = (longlong *)
                  in_stack_ffffffffffffff68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar2 = (**(code **)(*plVar11 + 0x3f0))();
      pvVar4 = _pthread_getspecific(pVar8);
      plVar11 = plVar12;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar11 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar3 = (**(code **)(*plVar11 + 0x3f0))();
      uVar13 = 1;
      if (iVar2 <= iVar3) {
        if (param_2 == 0) {
          uVar13 = 0;
        }
        else {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = in_stack_ffffffffffffff68;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (longlong *)
                      in_stack_ffffffffffffff68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_68 = (**(code **)(*plVar11 + 0x408))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = plVar12;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_64 = (**(code **)(*plVar11 + 0x408))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = in_stack_ffffffffffffff68;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (longlong *)
                      in_stack_ffffffffffffff68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_42 = (**(code **)(*plVar11 + 0x400))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = plVar12;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_41 = (**(code **)(*plVar11 + 0x400))();
          local_90[0] = '\0';
          local_78 = 0;
          local_80 = 0;
          local_88 = param_2;
          if (*(int *)(param_2 + 0xc) < 1) {
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            uVar9 = 0;
          }
          else {
            lVar6 = 0;
            uVar9 = 0;
            local_48 = 0;
            local_4c = 0;
            local_50 = 0;
            do {
              uVar16 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar6 * 8);
              local_6c = uVar9;
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar8 = 0;
              FUN_01510360(0,0,0,param_4,uVar16);
              if ((local_a0 == '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar8);
              plVar12 = local_a8;
              if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar12 = (longlong *)local_a8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              iVar2 = (**(code **)(*plVar12 + 0x408))();
              pvVar4 = _pthread_getspecific(pVar8);
              plVar12 = local_a8;
              if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar12 = (longlong *)local_a8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              bVar1 = (**(code **)(*plVar12 + 0x400))();
              bVar14 = iVar2 == local_68;
              bVar15 = iVar2 == local_64;
              if (local_a8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_50 = local_50 + bVar14;
              local_4c = local_4c + bVar15;
              local_48 = local_48 + (byte)(local_42 ^ bVar1 ^ 1);
              uVar9 = local_6c + (byte)(bVar1 ^ local_41 ^ 1);
              lVar6 = lVar6 + 1;
              local_80 = CONCAT44(local_80._4_4_,(int)lVar6);
              plVar12 = local_58;
              in_stack_ffffffffffffff68 = local_60;
            } while ((int)lVar6 < *(int *)(param_2 + 0xc));
          }
          FUN_0131c770();
          uVar13 = 0xffffffff;
          if ((local_4c <= local_50) && (uVar13 = 1, local_50 == local_4c)) {
            uVar13 = 0xffffffff;
            if (uVar9 <= local_48) {
              uVar13 = (ulonglong)(local_48 != uVar9);
            }
          }
          FUN_00d50b20();
        }
      }
    }
  }
  if ((local_38[0] != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_016707e3:
  if ((local_40[0] != '\0') && (in_stack_ffffffffffffff68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar13;
}


