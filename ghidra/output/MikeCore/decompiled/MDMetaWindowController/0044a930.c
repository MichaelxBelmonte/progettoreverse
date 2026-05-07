// Function: FUN_0044a930
// Address: 0044a930
// Size: 1732 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a930(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  undefined4 uVar9;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00448b60();
  plVar8 = (longlong *)unaff_RDI[0x11];
  plVar7 = plVar8;
  if (plVar8 != local_48) {
    plVar7 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_0044a96a;
      }
      FUN_00d50b00();
      plVar8 = (longlong *)unaff_RDI[0x11];
      unaff_RDI[0x11] = (longlong)local_48;
    }
    else {
      local_40[0] = '\0';
LAB_0044a96a:
      unaff_RDI[0x11] = (longlong)plVar7;
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = local_48;
    }
  }
  if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)unaff_RDI[0xe];
  if ((plVar8 != (longlong *)0x0) && (unaff_RDI[0x11] != 0)) {
    FUN_00324af0();
    FUN_00aea6b0();
    (**(code **)(*plVar8 + 0x928))();
    FUN_00324720();
    FUN_01aa3c20();
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar8 = unaff_RDI;
  do {
    (**(code **)(*plVar8 + 0x370))();
    if (local_48 == plVar8) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_0044aa87;
      }
    }
    else {
      plVar8 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar4 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar4 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_0044aa87:
        local_38[0] = '\x01';
        pcVar4 = local_40;
      }
      *pcVar4 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar7 = &DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar7 = (longlong *)&stack0xffffffffffffff90;
      if (cVar2 == '\0') {
        plVar7 = &DAT_02802688;
      }
    }
    if (*plVar7 != 0) {
      if ((local_38[0] == '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_0044abfa;
    }
  } while (plVar8 != (longlong *)0x0);
  plVar8 = (longlong *)0x0;
LAB_0044abfa:
  pVar6 = (pthread_key_t)plVar7;
  FUN_00d50b20();
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    bVar1 = false;
  }
  else {
    (**(code **)(*plVar8 + 0x5e0))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0044ac58;
      }
LAB_0044ac75:
      bVar1 = false;
      plVar8 = (longlong *)0x0;
    }
    else {
      if (local_48 == (longlong *)0x0) goto LAB_0044ac75;
LAB_0044ac58:
      FUN_007646f0();
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0044aca1;
        }
LAB_0044acc5:
        plVar8 = (longlong *)0x0;
        bVar1 = false;
      }
      else {
        if (local_48 == (longlong *)0x0) goto LAB_0044acc5;
LAB_0044aca1:
        FUN_012d25b0();
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0044acf1;
          }
LAB_0044ad49:
          plVar8 = (longlong *)0x0;
          bVar1 = false;
        }
        else {
          if (local_48 == (longlong *)0x0) goto LAB_0044ad49;
LAB_0044acf1:
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_012cb110();
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar9 = FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                uVar9 = FUN_00d50b20();
              }
              goto LAB_0044ad85;
            }
LAB_0044ae1c:
            plVar8 = (longlong *)0x0;
            bVar1 = false;
          }
          else {
            if (local_48 == (longlong *)0x0) goto LAB_0044ae1c;
LAB_0044ad85:
            local_98 = '\0';
            local_a0 = local_48;
            FUN_012d2830(uVar9,&local_a0);
            if (local_40[0] == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              bVar1 = false;
            }
            else {
              (**(code **)(*local_48 + 0x658))();
              if (local_48 == (longlong *)0x0) {
                plVar8 = (longlong *)0x0;
                bVar1 = false;
              }
              else {
                bVar1 = true;
                plVar8 = local_48;
                if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
                   (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0xf] + 0xb28))();
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_0044afdb;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (longlong *)0x0) goto LAB_0044afdb;
  FUN_00b2b1b0();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == plVar8) {
    if (plVar8 == (longlong *)0x0) {
      FUN_00b2b1b0();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        local_78 = '\0';
        local_80 = 0;
        FUN_00b2b080();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        FUN_00b2ad50();
      }
    }
  }
  else {
    FUN_00b2ad50();
    local_88 = '\0';
    local_90 = plVar8;
    FUN_00b2b080();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00b33590();
      FUN_00b2b4a0();
      FUN_00b2b3b0();
    }
  }
  FUN_00d50b20();
LAB_0044afdb:
  if ((bVar1) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


