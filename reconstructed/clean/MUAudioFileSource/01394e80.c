// Function: FUN_01394e80
// Address: 01394e80
// Size: 1579 bytes
// Class: MUAudioFileSource

int64_t FUN_01394e80(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t local_a8;
  char local_a0;
  int64_t local_80;
  char local_78;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  plVar6 = (int64_t *)*this_ptr;
  if (plVar6 == (int64_t *)0x0) {
    FUN_013933d0();
    lVar10 = *this_ptr;
    if (lVar10 == local_a8) {
      if (((char)this_ptr[1] == '\0') && (local_a8 != 0)) {
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
      lVar9 = this_ptr[1];
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = local_a8;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *this_ptr = local_a8;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01394f33:
      *(void*)(this_ptr + 1) = 1;
    }
    plVar6 = (int64_t *)*this_ptr;
    if (plVar6 == (int64_t *)0x0) {
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
        lVar7 = g_027bf478;
        plVar6 = *(int64_t **)(*(int64_t *)(local_a8 + 0x10) + lVar9 * 8);
        if (g_027bf478 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar6 + 0x400))();
        plVar4 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
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
          local_38 = (int64_t *)0x0;
LAB_01395254:
          lVar7 = (**(code **)(*plVar6 + 0x3b0))();
          if (bVar1) {
            plVar6 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar6 + 0x18))();
            bVar3 = true;
            local_38 = plVar6;
          }
          FUN_00d468f0();
          plVar6 = g_027bf448;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
              plVar6 = g_027bf448;
            }
          }
          else {
            local_78 = '\0';
          }
          g_027bf448 = plVar6;
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_40 = '\0';
          local_48 = plVar6;
          FUN_00ca0840();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 != (int64_t *)0x0) {
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
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar1 = true;
        }
        else {
          FUN_00ca94c0();
          local_38 = local_48;
          if (local_48 == (int64_t *)0x0) {
            local_38 = (int64_t *)0x0;
            bVar3 = false;
          }
          else if (local_40 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
            bVar3 = true;
          }
          plVar4 = g_027bf448;
          if (local_38 == (int64_t *)0x0) goto LAB_0139524e;
          if (g_027bf448 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_000175c0();
          plVar11 = local_48;
          FUN_00053ac0();
          pplVar8 = (int64_t **)&g_02802688;
          if (plVar11 != (int64_t *)0x0) {
            (**(code **)(*plVar11 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar8 = &local_48;
            if (cVar5 == '\0') {
              pplVar8 = (int64_t **)&g_02802688;
            }
          }
          plVar11 = *pplVar8;
          if (plVar11 == (int64_t *)0x0) {
            bVar2 = false;
            plVar11 = (int64_t *)0x0;
          }
          else {
            if (*(char *)(pplVar8 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(void*)(pplVar8 + 1) = 0;
            }
            bVar2 = true;
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar11 == (int64_t *)0x0) {
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
        if ((bVar3) && (local_38 != (int64_t *)0x0)) {
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

