// Function: FUN_01dde120
// Address: 01dde120
// Size: 1564 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01dde120(uint64_t param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  undefined7 uVar10;
  int64_t *plVar11;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar6 = g_027f2a10;
  if (g_027f2a10 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = (undefined7)((uint64_t)local_40 >> 8);
  if (cVar3 == '\0') {
    FUN_01cae990();
    lVar6 = g_026de900;
    if (g_026de900 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      plVar11 = (int64_t *)CONCAT71(uVar10,1);
      if (param_2 != '\0') {
        iVar4 = (int)this_ptr[0x30];
        if (0 < iVar4) {
          iVar8 = 0;
          do {
            if ((int)this_ptr[0x36] != iVar8) {
              lVar6 = this_ptr[0x34];
              if (lVar6 != 0) {
                iVar1 = *(int *)(lVar6 + 0x18);
                iVar7 = iVar1 + 3;
                if (-1 < iVar1) {
                  iVar7 = iVar1;
                }
                if (3 < iVar1) {
                  lVar6 = *(int64_t *)(lVar6 + 0x10);
                  lVar9 = 0;
                  do {
                    if (*(int *)(lVar6 + lVar9 * 4) == iVar8) goto LAB_01dde2b6;
                    lVar9 = lVar9 + 1;
                  } while (iVar7 >> 2 != (int)lVar9);
                }
              }
              FUN_01dd3d20(lVar6,1);
              iVar4 = (int)this_ptr[0x30];
            }
LAB_01dde2b6:
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar4);
        }
        (**(code **)(*this_ptr + 0x990))();
      }
      goto LAB_01dde72e;
    }
    FUN_01cae990();
    lVar6 = g_027f2a20;
    if (g_027f2a20 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    if (cVar3 == '\0') {
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar3 = *(char *)((int64_t)this_ptr + 0x231);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        plVar11 = (int64_t *)CONCAT71(uVar10,1);
        if (param_2 == '\0') goto LAB_01dde72e;
        (**(code **)(*this_ptr + 0xa00))();
        if (local_40 != (int64_t *)0x0) {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          iVar4 = FUN_00d8c7a0();
          if (iVar4 != 0) {
            FUN_01ca6970();
            FUN_01ca5d90();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01ca6970();
            lVar6 = g_026fceb8;
            if (g_026fceb8 != 0) {
              FUN_00d50b00();
            }
            FUN_01ca93d0();
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            plVar11 = local_40;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar11 = (int64_t *)CONCAT71((int7)((uint64_t)plVar11 >> 8),iVar4 != 0);
          FUN_00d50b20();
          goto LAB_01dde72e;
        }
        goto LAB_01dde4bc;
      }
    }
    FUN_01cae990();
    lVar6 = g_027f2a30;
    if (g_027f2a30 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_01cae990();
      lVar6 = g_027f2a00;
      if (g_027f2a00 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*local_40 + 0x50))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        uVar5 = FUN_01e47f50();
        plVar11 = (int64_t *)(uint64_t)uVar5;
      }
      else {
        plVar11 = (int64_t *)CONCAT71(uVar10,1);
        if (param_2 != '\0') {
          FUN_01caeb00();
          if (local_40 == (int64_t *)0x0) {
            bVar2 = true;
            plVar11 = (int64_t *)0x0;
          }
          else {
            plVar11 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
              bVar2 = false;
            }
            else {
              bVar2 = false;
            }
          }
          (**(code **)(*plVar11 + 0x980))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          (**(code **)(*this_ptr + 0x978))
                    (*(void*)((int64_t)this_ptr + 0x13c),(int)this_ptr[0x27]);
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01dd3d20();
          plVar11 = (int64_t *)CONCAT71(uVar10,1);
          if (!bVar2) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      plVar11 = (int64_t *)CONCAT71(uVar10,1);
      if (param_2 != '\0') {
        FUN_01ddeb40();
      }
    }
  }
  else {
    if ((int)this_ptr[0x36] != -1) {
      plVar11 = (int64_t *)CONCAT71(uVar10,this_ptr[0x40] == 0);
      if ((this_ptr[0x40] == 0) && (param_2 != '\0')) {
        FUN_01de1760();
        plVar11 = (int64_t *)CONCAT71(uVar10,1);
      }
      goto LAB_01dde72e;
    }
LAB_01dde4bc:
    plVar11 = (int64_t *)0x0;
  }
LAB_01dde72e:
  return (uint64_t)plVar11 & 0xffffffff;
}

