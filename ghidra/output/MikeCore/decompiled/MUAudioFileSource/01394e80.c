// Function: FUN_01394e80
// Address: 01394e80
// Size: 1579 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x01395199) */
/* WARNING: Removing unreachable block (ram,0x013951a5) */
/* WARNING: Removing unreachable block (ram,0x01395393) */
/* WARNING: Removing unreachable block (ram,0x0139539f) */
/* WARNING: Removing unreachable block (ram,0x01394f88) */
/* WARNING: Removing unreachable block (ram,0x01394f94) */

longlong FUN_01394e80(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  longlong *plVar11;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  plVar6 = (longlong *)*unaff_RDI;
  if (plVar6 == (longlong *)0x0) {
    FUN_013933d0();
    lVar10 = *unaff_RDI;
    if (lVar10 == local_a8) {
      if (((char)unaff_RDI[1] == '\0') && (local_a8 != 0)) {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01394f33;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar9 = unaff_RDI[1];
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = local_a8;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *unaff_RDI = local_a8;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01394f33:
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    plVar6 = (longlong *)*unaff_RDI;
    if (plVar6 == (longlong *)0x0) {
      return -1;
    }
  }
  (**(code **)(*plVar6 + 1000))();
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
      goto LAB_01394f99;
    }
  }
  else if (local_a8 != 0) {
LAB_01394f99:
    if (*(int *)(local_a8 + 0xc) < 1) {
      lVar10 = -1;
    }
    else {
      lVar10 = -1;
      lVar9 = 0;
      do {
        lVar7 = DAT_027bf478;
        plVar6 = *(longlong **)(*(longlong *)(local_a8 + 0x10) + lVar9 * 8);
        if (DAT_027bf478 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar6 + 0x400))();
        plVar4 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        cVar5 = (**(code **)(*plVar4 + 0x398))();
        bVar1 = true;
        if (cVar5 == '\0') {
          bVar3 = false;
LAB_0139524e:
          bVar2 = false;
          local_38 = (longlong *)0x0;
LAB_01395254:
          lVar7 = (**(code **)(*plVar6 + 0x3b0))();
          if (bVar1) {
            plVar6 = (longlong *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar6 + 0x18))();
            bVar3 = true;
            local_38 = plVar6;
          }
          FUN_00d468f0();
          plVar6 = DAT_027bf448;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
              plVar6 = DAT_027bf448;
            }
          }
          else {
            local_78 = '\0';
          }
          DAT_027bf448 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_40 = '\0';
          local_48 = plVar6;
          FUN_00ca0840();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_00ca5c10();
          FUN_00c91c80();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar1 = true;
        }
        else {
          FUN_00ca94c0();
          local_38 = local_48;
          if (local_48 == (longlong *)0x0) {
            local_38 = (longlong *)0x0;
            bVar3 = false;
          }
          else if (local_40 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
            bVar3 = true;
          }
          plVar4 = DAT_027bf448;
          if (local_38 == (longlong *)0x0) goto LAB_0139524e;
          if (DAT_027bf448 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_000175c0();
          plVar11 = local_48;
          FUN_00053ac0();
          pplVar8 = (longlong **)&DAT_02802688;
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar8 = &local_48;
            if (cVar5 == '\0') {
              pplVar8 = (longlong **)&DAT_02802688;
            }
          }
          plVar11 = *pplVar8;
          if (plVar11 == (longlong *)0x0) {
            bVar2 = false;
            plVar11 = (longlong *)0x0;
          }
          else {
            if (*(char *)(pplVar8 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(undefined1 *)(pplVar8 + 1) = 0;
            }
            bVar2 = true;
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar11 == (longlong *)0x0) {
            bVar1 = false;
            goto LAB_01395254;
          }
          lVar7 = FUN_00d45790();
          bVar1 = false;
        }
        FUN_00d50b20();
        if (bVar2 && !bVar1) {
          FUN_00d50b20();
        }
        if ((bVar3) && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + lVar7;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(local_a8 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
    return lVar10;
  }
  return -1;
}


