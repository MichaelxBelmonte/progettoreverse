// Function: FUN_0197f820
// Address: 0197f820
// Size: 1686 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x0197fc24) */
/* WARNING: Removing unreachable block (ram,0x0197fc2d) */
/* WARNING: Removing unreachable block (ram,0x0197fd25) */
/* WARNING: Removing unreachable block (ram,0x0197fd2e) */

void FUN_0197f820(pthread_key_t param_1)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  undefined1 *puVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((char)unaff_RDI[0x31] == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012708c0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_0197facb;
    }
    else {
      if (local_40 == 0) {
LAB_0197facb:
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        bVar2 = 1;
        if (local_40 == 0) {
          bVar3 = false;
LAB_0197fdb1:
          FUN_0197f3b0();
        }
        else {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar1 = unaff_RDI[0x2e];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_012ebc80();
          if (local_40 == 0) {
            bVar3 = false;
            lVar6 = 0;
          }
          else {
            lVar6 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
            }
            else {
              local_38 = '\0';
              bVar3 = true;
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 == 0) goto LAB_0197fdb1;
          if (*(int *)(lVar6 + 0xc) == 0) {
            bVar2 = 0;
            goto LAB_0197fdb1;
          }
          lVar1 = **(longlong **)(lVar6 + 0x10);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_0197f3b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          bVar2 = 0;
        }
        if (*(char *)((longlong)unaff_RDI + 0x18a) != '\x01') {
          *(undefined1 *)((longlong)unaff_RDI + 0x18a) = 1;
          (**(code **)(*unaff_RDI + 0x620))();
        }
        if (!(bool)(!bVar3 | bVar2)) {
          FUN_00d50b20();
        }
        goto LAB_0197fe03;
      }
      FUN_00d50b20();
    }
    FUN_0197f3b0();
    if (*(char *)((longlong)unaff_RDI + 0x18a) == '\0') goto LAB_0197fe03;
    puVar5 = (undefined1 *)((longlong)unaff_RDI + 0x18a);
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01270ab0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_0197f94f;
    }
    else {
      if (local_40 == 0) {
LAB_0197f94f:
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        bVar2 = 1;
        if (local_40 == 0) {
          bVar3 = false;
LAB_0197fcb1:
          FUN_0197f3b0();
        }
        else {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar1 = unaff_RDI[0x2e];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_012eb7a0();
          if (local_40 == 0) {
            lVar6 = 0;
            bVar3 = false;
          }
          else {
            lVar6 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
            }
            else {
              local_38 = '\0';
              bVar3 = true;
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 == 0) goto LAB_0197fcb1;
          if (*(int *)(lVar6 + 0xc) == 0) {
            bVar2 = 0;
            goto LAB_0197fcb1;
          }
          lVar1 = **(longlong **)(lVar6 + 0x10);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_0197f3b0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          bVar2 = 0;
        }
        if (*(char *)((longlong)unaff_RDI + 0x18b) != '\x01') {
          *(undefined1 *)((longlong)unaff_RDI + 0x18b) = 1;
          (**(code **)(*unaff_RDI + 0x620))();
        }
        if (!(bool)(!bVar3 | bVar2)) {
          FUN_00d50b20();
        }
        goto LAB_0197fe03;
      }
      FUN_00d50b20();
    }
    FUN_0197f3b0();
    if (*(char *)((longlong)unaff_RDI + 0x18b) == '\0') goto LAB_0197fe03;
    puVar5 = (undefined1 *)((longlong)unaff_RDI + 0x18b);
  }
  *puVar5 = 0;
  (**(code **)(*unaff_RDI + 0x620))();
LAB_0197fe03:
  lVar1 = unaff_RDI[0x2e];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0197f680();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0197e990();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


