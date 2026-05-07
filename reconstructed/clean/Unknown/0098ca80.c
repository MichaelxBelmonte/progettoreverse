// Function: FUN_0098ca80
// Address: 0098ca80
// Size: 825 bytes
// Class: Unknown

void FUN_0098ca80(void)

{
  void*puVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  
  plVar8 = (int64_t *)*arg1;
  plVar6 = arg1;
  if (plVar8 == (int64_t *)0x0) {
LAB_0098caa4:
    plVar8 = (int64_t *)plVar6[1];
    if (plVar8 == (int64_t *)0x0) {
      bVar3 = false;
      plVar8 = (int64_t *)0x0;
      goto LAB_0098cac3;
    }
  }
  else {
    plVar5 = (int64_t *)arg1[1];
    if ((int64_t *)arg1[1] != (int64_t *)0x0) {
      do {
        plVar6 = plVar5;
        plVar5 = (int64_t *)*plVar6;
      } while ((int64_t *)*plVar6 != (int64_t *)0x0);
      goto LAB_0098caa4;
    }
  }
  plVar8[2] = plVar6[2];
  bVar3 = true;
LAB_0098cac3:
  puVar1 = (void*)plVar6[2];
  plVar5 = (int64_t *)*puVar1;
  if (plVar5 == plVar6) {
    *puVar1 = plVar8;
    if (plVar6 == this_ptr) {
      plVar5 = (int64_t *)0x0;
      this_ptr = plVar8;
    }
    else {
      plVar5 = (int64_t *)puVar1[1];
    }
  }
  else {
    puVar1[1] = plVar8;
  }
  lVar4 = plVar6[3];
  if (plVar6 != arg1) {
    lVar2 = arg1[2];
    plVar6[2] = lVar2;
    *(int64_t **)(lVar2 + (uint64_t)(*(int64_t **)arg1[2] != arg1) * 8) = plVar6;
    lVar2 = *arg1;
    *plVar6 = lVar2;
    *(int64_t **)(lVar2 + 0x10) = plVar6;
    lVar2 = arg1[1];
    plVar6[1] = lVar2;
    if (lVar2 != 0) {
      *(int64_t **)(lVar2 + 0x10) = plVar6;
    }
    *(char *)(plVar6 + 3) = (char)arg1[3];
    if (this_ptr == arg1) {
      this_ptr = plVar6;
    }
  }
  if (((char)lVar4 != '\0') && (this_ptr != (int64_t *)0x0)) {
    if (!bVar3) {
      while( true ) {
        plVar8 = (int64_t *)plVar5[2];
        if ((int64_t *)*plVar8 == plVar5) break;
        if ((char)plVar5[3] == '\0') {
          *(void*)(plVar5 + 3) = 1;
          *(void*)(plVar8 + 3) = 0;
          plVar6 = (int64_t *)plVar8[1];
          lVar4 = *plVar6;
          plVar8[1] = lVar4;
          if (lVar4 != 0) {
            *(int64_t **)(lVar4 + 0x10) = plVar8;
          }
          plVar6[2] = plVar8[2];
          ((void*)plVar8[2])[*(int64_t **)plVar8[2] != plVar8] = plVar6;
          *plVar6 = (int64_t)plVar8;
          plVar8[2] = (int64_t)plVar6;
          if (this_ptr == (int64_t *)*plVar5) {
            this_ptr = plVar5;
          }
          plVar5 = (int64_t *)((int64_t *)*plVar5)[1];
        }
        plVar8 = (int64_t *)*plVar5;
        if ((plVar8 != (int64_t *)0x0) && ((char)plVar8[3] == '\0')) {
          plVar9 = (int64_t *)plVar5[1];
          if (plVar9 != (int64_t *)0x0) goto LAB_0098cc97;
LAB_0098cc9d:
          *(void*)(plVar8 + 3) = 1;
          *(void*)(plVar5 + 3) = 0;
          lVar4 = plVar8[1];
          *plVar5 = lVar4;
          if (lVar4 != 0) {
            *(int64_t **)(lVar4 + 0x10) = plVar5;
          }
          plVar8[2] = plVar5[2];
          ((void*)plVar5[2])[*(int64_t **)plVar5[2] != plVar5] = plVar8;
          plVar8[1] = (int64_t)plVar5;
          plVar5[2] = (int64_t)plVar8;
          plVar7 = plVar8;
          plVar9 = plVar5;
LAB_0098ccde:
          plVar6 = (int64_t *)plVar7[2];
          *(char *)(plVar7 + 3) = (char)plVar6[3];
          *(void*)(plVar6 + 3) = 1;
          *(void*)(plVar9 + 3) = 1;
          plVar8 = (int64_t *)plVar6[1];
          lVar4 = *plVar8;
          plVar6[1] = lVar4;
          if (lVar4 != 0) {
            *(int64_t **)(lVar4 + 0x10) = plVar6;
          }
          plVar8[2] = plVar6[2];
          ((int64_t *)plVar6[2])[*(int64_t **)plVar6[2] != plVar6] = (int64_t)plVar8;
          *plVar8 = (int64_t)plVar6;
LAB_0098cdb2:
          plVar6[2] = (int64_t)plVar8;
          return;
        }
        plVar9 = (int64_t *)plVar5[1];
        if ((plVar9 != (int64_t *)0x0) && ((char)plVar9[3] == '\0')) {
LAB_0098cc97:
          plVar7 = plVar5;
          if ((char)plVar9[3] != '\0') goto LAB_0098cc9d;
          goto LAB_0098ccde;
        }
        *(void*)(plVar5 + 3) = 0;
        plVar8 = (int64_t *)plVar5[2];
        plVar9 = this_ptr;
        if ((int64_t *)plVar5[2] == this_ptr) goto LAB_0098cc85;
LAB_0098cc67:
        this_ptr = plVar8;
        if ((char)this_ptr[3] == '\0') goto LAB_0098cc85;
        plVar5 = (int64_t *)((void*)this_ptr[2])[*(int64_t **)this_ptr[2] == this_ptr];
        this_ptr = plVar9;
      }
      plVar6 = plVar5;
      plVar9 = this_ptr;
      if ((char)plVar5[3] == '\0') {
        *(void*)(plVar5 + 3) = 1;
        *(void*)(plVar8 + 3) = 0;
        plVar6 = (int64_t *)plVar5[1];
        *plVar8 = (int64_t)plVar6;
        if (plVar6 != (int64_t *)0x0) {
          plVar6[2] = (int64_t)plVar8;
        }
        plVar5[2] = plVar8[2];
        puVar1 = (void*)plVar8[2];
        if ((int64_t *)*puVar1 == plVar8) {
          *puVar1 = plVar5;
          plVar6 = (int64_t *)*plVar8;
        }
        else {
          puVar1[1] = plVar5;
        }
        plVar5[1] = (int64_t)plVar8;
        plVar8[2] = (int64_t)plVar5;
        if (this_ptr == plVar8) {
          plVar9 = plVar5;
        }
      }
      plVar8 = (int64_t *)*plVar6;
      plVar5 = plVar6;
      if ((plVar8 == (int64_t *)0x0) || ((char)plVar8[3] != '\0')) {
        plVar7 = (int64_t *)plVar6[1];
        if ((plVar7 == (int64_t *)0x0) || ((char)plVar7[3] != '\0')) {
          *(void*)(plVar6 + 3) = 0;
          this_ptr = (int64_t *)plVar6[2];
          plVar8 = this_ptr;
          if (this_ptr != plVar9) goto LAB_0098cc67;
LAB_0098cc85:
          *(void*)(this_ptr + 3) = 1;
          return;
        }
        if ((plVar8 == (int64_t *)0x0) || ((char)plVar8[3] != '\0')) {
          *(void*)(plVar7 + 3) = 1;
          *(void*)(plVar6 + 3) = 0;
          lVar4 = *plVar7;
          plVar6[1] = lVar4;
          if (lVar4 != 0) {
            *(int64_t **)(lVar4 + 0x10) = plVar6;
          }
          plVar7[2] = plVar6[2];
          ((void*)plVar6[2])[*(int64_t **)plVar6[2] != plVar6] = plVar7;
          *plVar7 = (int64_t)plVar6;
          plVar6[2] = (int64_t)plVar7;
          plVar5 = plVar7;
          plVar8 = plVar6;
        }
      }
      plVar6 = (int64_t *)plVar5[2];
      *(char *)(plVar5 + 3) = (char)plVar6[3];
      *(void*)(plVar6 + 3) = 1;
      *(void*)(plVar8 + 3) = 1;
      plVar8 = (int64_t *)*plVar6;
      lVar4 = plVar8[1];
      *plVar6 = lVar4;
      if (lVar4 != 0) {
        *(int64_t **)(lVar4 + 0x10) = plVar6;
      }
      plVar8[2] = plVar6[2];
      ((void*)plVar6[2])[*(int64_t **)plVar6[2] != plVar6] = plVar8;
      plVar8[1] = (int64_t)plVar6;
      goto LAB_0098cdb2;
    }
    *(void*)(plVar8 + 3) = 1;
  }
  return;
}

