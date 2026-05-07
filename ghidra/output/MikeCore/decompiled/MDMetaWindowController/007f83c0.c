// Function: FUN_007f83c0
// Address: 007f83c0
// Size: 2310 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "GNColor"


/* WARNING: Removing unreachable block (ram,0x007f8855) */
/* WARNING: Removing unreachable block (ram,0x007f885a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f83c0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong *unaff_RDI;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  undefined4 uVar14;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_58;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01e561b0();
  local_78 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_007f8632;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_007f8424:
    FUN_01d8b200();
    plVar12 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      plVar12 = unaff_RDI;
      do {
        (**(code **)(*plVar12 + 0x370))();
        plVar10 = local_48;
        if (local_48 == plVar12) {
          if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_007f84d7;
          }
        }
        else {
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar7 = local_38;
            }
            else {
              FUN_00d50b20();
              pcVar7 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar12 = plVar10;
LAB_007f84d7:
            local_38[0] = '\x01';
            pcVar7 = local_40;
            plVar10 = plVar12;
          }
          *pcVar7 = '\0';
          plVar12 = plVar10;
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((DAT_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
        plVar10 = (longlong *)&DAT_02802688;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x360))();
          cVar5 = FUN_00e85ea0();
          plVar10 = (longlong *)&stack0xffffffffffffffa0;
          if (cVar5 == '\0') {
            plVar10 = (longlong *)&DAT_02802688;
          }
        }
        if (*plVar10 != 0) {
          if ((local_38[0] == '\0') && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          plVar11 = plVar12;
          if (unaff_RDI == (longlong *)0x0) goto LAB_007f8670;
          goto LAB_007f866b;
        }
      } while (plVar12 != (longlong *)0x0);
      plVar11 = (longlong *)0x0;
      if (unaff_RDI != (longlong *)0x0) {
LAB_007f866b:
        FUN_00d50b20();
      }
LAB_007f8670:
      pVar9 = (pthread_key_t)plVar10;
      if (plVar11 == (longlong *)0x0) {
        bVar2 = false;
LAB_007f879e:
        plVar10 = (longlong *)&stack0xffffffffffffffa0;
        FUN_01d8b200();
        (**(code **)(*plVar12 + 0x3f8))();
        plVar11 = local_48;
        if (local_40[0] == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_58 != '\0') && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 == (longlong *)0x0) goto LAB_007f8994;
        if (*(int *)((longlong)plVar11 + 0xc) == 1) {
          FUN_00d23310();
          plVar12 = local_48;
          local_58 = local_40[0] != '\0';
          if ((bool)local_58) {
            local_40[0] = '\0';
          }
          FUN_0006e1c0();
          if (plVar12 == (longlong *)0x0) {
LAB_007f888b:
            plVar10 = (longlong *)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar12 + 0x360))();
            cVar5 = FUN_00e85ea0();
            if (cVar5 == '\0') goto LAB_007f888b;
          }
          lVar1 = *plVar10;
          if ((char)plVar10[1] == '\0') {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(plVar10 + 1) = 0;
          }
          if (((bool)local_58) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar1 == 0) goto LAB_007f88f7;
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar10 = local_48;
          if (local_48 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            bVar2 = true;
            if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        else {
LAB_007f88f7:
          plVar10 = (longlong *)0x0;
        }
        FUN_00d50b20();
        if (plVar10 == (longlong *)0x0) goto LAB_007f8994;
      }
      else {
        FUN_0063f230();
        if (local_40[0] == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_007f8785;
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_007f86c5:
          iVar6 = FUN_00228b30();
          if (iVar6 == 1) {
            FUN_00226f20();
            plVar10 = local_48;
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (longlong *)0x0) goto LAB_007f8773;
            FUN_00226f20();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0165a070();
            plVar10 = local_48;
            if (local_48 == (longlong *)0x0) {
              plVar10 = (longlong *)0x0;
              bVar2 = false;
            }
            else if (local_40[0] == '\0') {
              FUN_00d50b00();
              bVar2 = true;
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
              bVar2 = true;
            }
            if ((local_58 != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
LAB_007f8773:
            plVar10 = (longlong *)0x0;
            bVar2 = false;
          }
          FUN_00d50b20();
        }
        else {
          if (local_48 != (longlong *)0x0) goto LAB_007f86c5;
LAB_007f8785:
          bVar2 = false;
          plVar10 = (longlong *)0x0;
        }
        FUN_00d50b20();
        if (plVar10 == (longlong *)0x0) goto LAB_007f879e;
      }
      local_80 = plVar10;
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_012f4ba0();
      local_b0 = DAT_026fc8b8;
      if (DAT_026fc8b8 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_a8 = '\x01';
      pplVar13 = &local_48;
      FUN_000175c0(uVar14,&local_b0);
      plVar10 = local_48;
      if ((DAT_026e9ce0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026fd0e8 = FUN_00d4fe50();
        DAT_026fd0d0 = "GNColor";
        _DAT_026fd0d8 = 0x30;
        pVar9 = 0x1b8c30;
        _DAT_026fd0e0 = FUN_001b8c30;
        _DAT_026fd0f0 = 0;
        uRam00000000026fd0f8 = 0;
        _DAT_026fd100 = 0;
        uRam00000000026fd108 = 0;
        _DAT_026fd110 = 0;
        uRam00000000026fd118 = 0;
        _DAT_026fd120 = 0;
        uRam00000000026fd128 = 0;
        _DAT_026fd130 = 0;
        uRam00000000026fd138 = 0;
        _DAT_026fd140 = 0;
        uRam00000000026fd148 = 0;
        _DAT_026fd150 = 0;
        uRam00000000026fd158 = 0;
        _DAT_026fd160 = 0;
        uRam00000000026fd168 = 0;
        _DAT_026fd170 = 0;
        uRam00000000026fd178 = 0;
        _DAT_026fd180 = 0;
        uRam00000000026fd188 = 0;
        _DAT_026fd190 = 0;
        ___cxa_guard_release();
      }
      if (plVar10 == (longlong *)0x0) {
        pplVar13 = &DAT_02802688;
        plVar10 = DAT_02802688;
        if (DAT_02802688 != (longlong *)0x0) goto LAB_007f8a38;
LAB_007f8a5c:
        bVar3 = false;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') {
          pplVar13 = &DAT_02802688;
        }
        plVar10 = *pplVar13;
        if (plVar10 == (longlong *)0x0) goto LAB_007f8a5c;
LAB_007f8a38:
        if (*(char *)(pplVar13 + 1) == '\0') {
          bVar3 = true;
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar13 + 1) = 0;
          bVar3 = true;
        }
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (plVar12 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      plVar12 = local_48;
      if (local_48 == (longlong *)0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (bVar2) {
        FUN_00d50b20();
      }
      bVar2 = false;
      goto LAB_007f8b28;
    }
LAB_007f8994:
    bVar2 = false;
  }
  else {
    if (local_48 != (longlong *)0x0) goto LAB_007f8424;
LAB_007f8632:
    bVar2 = true;
  }
  bVar3 = false;
  plVar10 = (longlong *)0x0;
  bVar4 = false;
  plVar12 = (longlong *)0x0;
LAB_007f8b28:
  local_98 = '\0';
  local_a0 = plVar12;
  (**(code **)(*(longlong *)unaff_RDI[0xe] + 0x958))();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = '\0';
  local_90 = plVar10;
  FUN_01d57f20();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


