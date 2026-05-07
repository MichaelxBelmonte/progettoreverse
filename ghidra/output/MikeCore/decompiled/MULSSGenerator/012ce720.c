// Function: FUN_012ce720
// Address: 012ce720
// Size: 1475 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012cea49) */
/* WARNING: Removing unreachable block (ram,0x012cea52) */
/* WARNING: Removing unreachable block (ram,0x012ce837) */
/* WARNING: Removing unreachable block (ram,0x012ce840) */
/* WARNING: Removing unreachable block (ram,0x012ce7d3) */
/* WARNING: Removing unreachable block (ram,0x012ce7dc) */
/* WARNING: Removing unreachable block (ram,0x012cecda) */
/* WARNING: Removing unreachable block (ram,0x012cece3) */

void FUN_012ce720(pthread_key_t param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_48;
  char local_40;
  
  bVar1 = false;
  plVar10 = (longlong *)0x0;
  bVar2 = false;
  plVar8 = (longlong *)0x0;
  bVar5 = false;
LAB_012ce75d:
  FUN_00dee5a0(DAT_023908c8);
  do {
    FUN_012cf020();
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) break;
      FUN_00d50b00();
    }
    else if (local_48 == (longlong *)0x0) break;
    (**(code **)(*local_48 + 0x5d0))();
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_012ce850;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_012ce850:
      plVar9 = plVar8;
      bVar3 = bVar2;
      if (!bVar5) {
        FUN_00b33760();
        if (local_48 == plVar10) {
          if ((bVar1) || (local_48 == (longlong *)0x0)) {
joined_r0x012ce911:
            plVar7 = plVar10;
            bVar5 = bVar1;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar7 = plVar10;
            bVar5 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_012ce8f9;
            }
          }
        }
        else {
          plVar7 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar1) && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar10 = local_48;
LAB_012ce8f9:
              bVar1 = true;
              goto joined_r0x012ce911;
            }
          }
          else {
            bVar5 = true;
            if ((bVar1) && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar5 = true;
            }
          }
        }
        bVar1 = bVar5;
        bVar5 = true;
        if (plVar7 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          (**(code **)(*plVar7 + 0x368))();
          plVar10 = plVar7;
          if (local_48 == plVar8) {
            if ((bVar2) || (local_48 == (longlong *)0x0)) goto joined_r0x012ce9e4;
            bVar3 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_012ce9cf;
            }
          }
          else {
            plVar9 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar2) && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_012ce9cf:
              bVar3 = true;
joined_r0x012ce9e4:
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if ((bVar2) && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_00b33760();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = plVar9;
      bVar2 = bVar1;
      bVar4 = bVar3;
      if (local_48 == plVar10) {
        if (plVar10 != (longlong *)0x0) goto LAB_012cec14;
        plVar10 = (longlong *)0x0;
      }
      else {
        if ((plVar10 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x370))();
        }
        FUN_00b33760();
        if (local_48 == plVar10) {
          plVar7 = plVar10;
          if ((bVar1) || (plVar10 == (longlong *)0x0)) {
LAB_012ceb1b:
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012ceb2f;
          }
          if (local_40 == '\0') {
            FUN_00d50b00();
            bVar2 = true;
            goto LAB_012ceb1b;
          }
          bVar2 = true;
        }
        else {
          plVar7 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012ceb1b;
          }
          bVar2 = true;
          if ((bVar1) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_012ceb2f:
          plVar10 = plVar7;
          if (plVar7 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
            bVar1 = bVar2;
            goto LAB_012cec45;
          }
        }
        (**(code **)(*plVar10 + 0x368))();
        if (local_48 == plVar9) {
          if ((!bVar3) && (local_48 != (longlong *)0x0)) {
            bVar4 = true;
            if (local_40 != '\0') goto LAB_012cec14;
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          plVar8 = local_48;
          if (local_40 != '\0') {
            bVar4 = true;
            if ((bVar3) && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012cec14;
          }
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_012cec14:
        bVar3 = bVar4;
        FUN_00da5ad0();
        FUN_00b33790();
        FUN_00da6740();
        plVar9 = plVar8;
        bVar1 = bVar2;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_012cec45:
      if (*(char *)((longlong)local_48 + 0x19f) != '\0') {
        _pthread_setspecific(param_1,param_2);
      }
      FUN_0130f550();
      if (*(char *)((longlong)local_48 + 0x19f) != '\0') {
        _pthread_setspecific(param_1,param_2);
      }
      iVar6 = FUN_00e31690();
      if (iVar6 < 1) {
        FUN_00dee620();
      }
      FUN_00d50b20();
      plVar8 = plVar9;
      bVar2 = bVar3;
    }
    FUN_00d50b20();
  } while( true );
  if (DAT_028ac878 == '\x01') {
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x370))();
    }
    if ((bVar1) && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    return;
  }
  goto LAB_012ce75d;
}


