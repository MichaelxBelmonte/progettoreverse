// Function: FUN_01aa96d0
// Address: 01aa96d0
// Size: 2276 bytes
// Class: MUScaleBrowserItem


/* WARNING: Removing unreachable block (ram,0x01aa9f80) */
/* WARNING: Removing unreachable block (ram,0x01aa9f89) */
/* WARNING: Removing unreachable block (ram,0x01aa9f08) */
/* WARNING: Removing unreachable block (ram,0x01aa9ef5) */
/* WARNING: Removing unreachable block (ram,0x01aa9f29) */
/* WARNING: Removing unreachable block (ram,0x01aa9f44) */
/* WARNING: Removing unreachable block (ram,0x01aa9f58) */
/* WARNING: Removing unreachable block (ram,0x01aa9f66) */
/* WARNING: Removing unreachable block (ram,0x01aa9e4d) */
/* WARNING: Removing unreachable block (ram,0x01aa9e5a) */

ulonglong FUN_01aa96d0(char *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (((*(longlong *)(unaff_RDI + 0x20) == 0) || (*(longlong *)(unaff_RDI + 0x40) == 0)) ||
     (*(longlong *)(unaff_RDI + 0x10) == 0)) {
    uVar7 = 0;
  }
  else {
    FUN_01aa8f10();
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    iVar1 = *(int *)(local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      iVar2 = *(int *)(local_48 + 0xc);
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
      if (iVar2 == 1) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar5 = local_38;
        pcVar4 = local_40;
        if (local_40[0] == '\0') {
          pcVar4 = pcVar5;
        }
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (pthread_key_t)pcVar5;
        lVar9 = *(longlong *)(unaff_RDI + 0x50);
        if (lVar9 == local_48) {
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              lVar9 = *(longlong *)(unaff_RDI + 0x50);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(longlong *)(unaff_RDI + 0x50) = local_48;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        param_1 = local_38;
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = param_1;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = *(longlong *)(unaff_RDI + 0x58);
        if (lVar9 == local_48) {
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              lVar9 = *(longlong *)(unaff_RDI + 0x58);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(longlong *)(unaff_RDI + 0x58) = local_48;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar10 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar11 = (float)FUN_0125a2c0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (fVar10 <= fVar11) {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8);
          lVar8 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(longlong *)(unaff_RDI + 0x50);
            }
            *(longlong *)(unaff_RDI + 0x50) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = **(longlong **)(local_48 + 0x10);
          lVar8 = *(longlong *)(unaff_RDI + 0x58);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(longlong *)(unaff_RDI + 0x58);
            }
            *(longlong *)(unaff_RDI + 0x58) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = **(longlong **)(local_48 + 0x10);
          lVar8 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(longlong *)(unaff_RDI + 0x50);
            }
            *(longlong *)(unaff_RDI + 0x50) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8);
          lVar8 = *(longlong *)(unaff_RDI + 0x58);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(longlong *)(unaff_RDI + 0x58);
            }
            *(longlong *)(unaff_RDI + 0x58) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00cafd20();
      while( true ) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        param_1 = local_38;
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = param_1;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) break;
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6e20();
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x90) != 0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = local_38;
        }
        *pcVar5 = '\0';
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      unaff_RBX = 0;
      (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x3c8))();
    }
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 != 0);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}


