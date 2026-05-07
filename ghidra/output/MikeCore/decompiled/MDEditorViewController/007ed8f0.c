// Function: FUN_007ed8f0
// Address: 007ed8f0
// Size: 1526 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x007edb29) */
/* WARNING: Removing unreachable block (ram,0x007edb32) */
/* WARNING: Removing unreachable block (ram,0x007ede54) */
/* WARNING: Removing unreachable block (ram,0x007ede5d) */

undefined8 FUN_007ed8f0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  code *pcVar9;
  int iVar10;
  longlong local_b0;
  char local_a8;
  undefined1 local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_007ec8d0();
  if (local_a8 == '\0') {
    if (local_b0 == 0) goto LAB_007edefc;
    FUN_00d50b00();
  }
  else if (local_b0 == 0) goto LAB_007edefc;
  pcVar2 = DAT_02572370;
  if (0 < *(int *)(local_b0 + 0xc)) {
    iVar10 = 0;
    pcVar9 = DAT_02572370;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      plVar5 = local_48;
      if (local_40[0] == (code)0x0) {
        if (local_48 == (longlong *)0x0) goto LAB_007eda70;
        FUN_00d50b00();
        if ((local_40[0] != (code)0x0) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_48 == (longlong *)0x0) {
LAB_007eda70:
        pvVar3 = _pthread_getspecific((pthread_key_t)pcVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific((pthread_key_t)pcVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb7a0();
        plVar1 = local_48;
        if (local_40[0] == (code)0x0) {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != (code)0x0)) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = (code)0x0;
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)((longlong)plVar1 + 0xc) != 0) {
          FUN_00d23310();
          plVar1 = local_48;
          local_58 = local_40[0];
          pcVar9 = (code *)&local_58;
          pcVar6 = (code *)local_40;
          if (local_40[0] == (code)0x0) {
            pcVar6 = pcVar9;
          }
          *pcVar6 = (code)0x0;
          if ((local_40[0] != (code)0x0) && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar1 != (longlong *)0x0) && (plVar5 = plVar1, local_58 == (code)0x0)) {
            FUN_00d50b00();
          }
        }
        FUN_00d50b20();
      }
      pVar8 = (pthread_key_t)pcVar9;
      if (plVar5 != (longlong *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*pcVar2)();
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_007ef010();
        (**(code **)(*plVar5 + 0x18))();
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar1 = (longlong *)plVar5[2];
        plVar7 = plVar1;
        if (plVar1 != local_48) {
          if (local_40[0] == (code)0x0) {
            if (local_48 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
              goto LAB_007edc63;
            }
            FUN_00d50b00();
            plVar1 = (longlong *)plVar5[2];
            plVar5[2] = (longlong)local_48;
            plVar7 = local_48;
          }
          else {
            local_40[0] = (code)0x0;
            plVar7 = local_48;
LAB_007edc63:
            plVar5[2] = (longlong)plVar7;
          }
          pVar8 = (pthread_key_t)plVar1;
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar7 = local_48;
          }
        }
        if ((local_40[0] != (code)0x0) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar1 = (longlong *)plVar5[3];
        plVar7 = plVar1;
        if (plVar1 != local_48) {
          if (local_40[0] == (code)0x0) {
            if (local_48 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
              goto LAB_007edd07;
            }
            FUN_00d50b00();
            plVar1 = (longlong *)plVar5[3];
            plVar5[3] = (longlong)local_48;
            plVar7 = local_48;
          }
          else {
            local_40[0] = (code)0x0;
            plVar7 = local_48;
LAB_007edd07:
            plVar5[3] = (longlong)plVar7;
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar7 = local_48;
          }
        }
        if ((local_40[0] != (code)0x0) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_40[0] = (code)0x0;
        local_48 = plVar5;
        FUN_00d21140();
        if ((local_40[0] != (code)0x0) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar9 = (code *)local_38;
        pcVar6 = (code *)local_40;
        if (local_40[0] == (code)0x0) {
          pcVar6 = pcVar9;
        }
        *pcVar6 = (code)0x0;
        if ((local_40[0] != (code)0x0) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)pcVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df480();
        pvVar3 = _pthread_getspecific((pthread_key_t)pcVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0138b6e0();
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != (code)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(local_b0 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_007edefc:
  FUN_007ebe20();
  return 1;
}


