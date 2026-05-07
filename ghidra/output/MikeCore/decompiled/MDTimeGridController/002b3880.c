// Function: FUN_002b3880
// Address: 002b3880
// Size: 2461 bytes
// Class: MDTimeGridController
// String references:
//   "MDTimeGridController"


/* WARNING: Removing unreachable block (ram,0x002b412e) */
/* WARNING: Removing unreachable block (ram,0x002b4137) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b3880(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar3 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6d10;
  if (DAT_026f6d10 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar3 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fce70;
  if (cVar4 == '\0') {
    if (DAT_026fce70 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar3 + 0x50))();
    lVar2 = DAT_026f6e90;
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      if (DAT_026f6e90 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar3 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027ebc60;
    if (cVar5 == '\0') {
      if (DAT_027ebc60 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar3 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_026fc520;
      if (cVar4 == '\0') {
        if (DAT_026fc520 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*plVar3 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_027f0f20;
        if (cVar4 == '\0') {
          if (DAT_027f0f20 != 0) {
            FUN_00d50b00();
          }
          cVar4 = (**(code **)(*plVar3 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = DAT_026d7d88;
          if (cVar4 == '\0') {
            if (DAT_026d7d88 != 0) {
              FUN_00d50b00();
            }
            cVar4 = (**(code **)(*plVar3 + 0x50))();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((cVar4 != '\0') && ((longlong *)unaff_RDI[0x27] != (longlong *)0x0)) {
              (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x30))();
              FUN_00d3ecf0();
              plVar10 = local_48;
              plVar9 = local_68;
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 == plVar9) {
                (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x38))();
              }
            }
          }
          else {
            FUN_00d3ecf0();
            pplVar8 = &local_48;
            FUN_01d77a20();
            plVar9 = local_48;
            if ((DAT_02701700 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
              _DAT_026fc568 = FUN_00015ff0();
              _DAT_026fc550 = "MDTimeGridController";
              _DAT_026fc558 = 0x118;
              _DAT_026fc560 = FUN_002b8a60;
              _DAT_026fc570 = 0;
              uRam00000000026fc578 = 0;
              _DAT_026fc580 = 0;
              _DAT_026fc5f8 = 0;
              uRam00000000026fc600 = 0;
              _DAT_026fc608 = 0;
              DAT_026fc60a = 1;
              _DAT_026fc588 = 0;
              uRam00000000026fc590 = 0;
              _DAT_026fc598 = 0;
              uRam00000000026fc5a0 = 0;
              _DAT_026fc5a8 = 0;
              uRam00000000026fc5b0 = 0;
              _DAT_026fc5b8 = 0;
              uRam00000000026fc5c0 = 0;
              _DAT_026fc5c8 = 0;
              uRam00000000026fc5d0 = 0;
              _DAT_026fc5d8 = 0;
              uRam00000000026fc5e0 = 0;
              _DAT_026fc5e8 = 0;
              uRam00000000026fc5f0 = 0;
              DAT_026fc613 = 0;
              _DAT_026fc60b = 0;
              ___cxa_guard_release();
            }
            if (plVar9 == (longlong *)0x0) {
              pplVar8 = (longlong **)&DAT_02802688;
            }
            else {
              (**(code **)(*plVar9 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 == '\0') {
                pplVar8 = (longlong **)&DAT_02802688;
              }
            }
            plVar9 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar9 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar8 + 1) = 0;
            }
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar9 != (longlong *)0x0) {
              FUN_00559890();
              (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x38))();
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_00d3ecf0();
          FUN_01d77a20();
          plVar9 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00559890();
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x30))();
          plVar10 = local_48;
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          FUN_005597b0();
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x30))();
        if (local_40[0] == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_002b4110;
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == (longlong *)0x0) goto LAB_002b4110;
        FUN_001060a0();
        FUN_00d3ecf0();
        plVar10 = local_48;
        plVar9 = local_68;
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 == plVar9) {
          lVar1 = unaff_RDI[0x29];
          FUN_001060a0();
          cVar4 = (**(code **)(*local_48 + 0x3c8))();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)lVar1 != cVar4) {
            (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x38))();
          }
        }
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x38))();
    }
    goto LAB_002b4110;
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar9 = unaff_RDI;
  local_68 = unaff_RDI;
  do {
    (**(code **)(*plVar9 + 0x370))();
    plVar10 = local_48;
    if (local_48 == plVar9) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) &&
         (plVar10 = plVar9, local_40[0] != '\0')) goto LAB_002b39b7;
    }
    else {
      local_68 = local_48;
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
LAB_002b39b7:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
      plVar9 = plVar10;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    pplVar8 = (longlong **)&DAT_02802688;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar8 = &local_68;
      if (cVar4 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar8 != (longlong *)0x0) {
      if ((local_38[0] == '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x002b3b55;
    }
  } while (plVar9 != (longlong *)0x0);
  plVar9 = (longlong *)0x0;
joined_r0x002b3b55:
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d3ecf0();
  plVar10 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == plVar10) {
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x30))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_002b3d3c;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_002b3d3c:
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_48 + 0x450))();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_0010a0e0();
      }
      FUN_00d50b20();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_002b4110:
  FUN_00d530a0();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


