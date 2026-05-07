// Function: FUN_00c8d640
// Address: 00c8d640
// Size: 2212 bytes
// Class: Unknown

uint64_t FUN_00c8d640(byte param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t arg1;
  int64_t *this_ptr;
  uint uVar10;
  uint uVar11;
  
  param_1 = param_1 ^ 1;
  bVar2 = false;
LAB_00c8d682:
  do {
    bVar1 = bVar2;
    uVar10 = *(uint *)(this_ptr + 1);
    if (0x34 < (int)uVar10) {
      uVar9 = (*this_ptr[2])();
      uVar10 = *(uint *)(this_ptr + 1);
      lVar8 = *this_ptr;
      iVar7 = (int)((uVar9 & 0xffffffff) % (uint64_t)uVar10);
      lVar4 = (int64_t)iVar7;
      if (*(int64_t *)(lVar8 + lVar4 * 8) != 0) {
        cVar3 = (*this_ptr[3])();
        if (cVar3 != '\0') {
          uVar6 = *(void*)(*this_ptr + lVar4 * 8);
          if ((param_2 & 1) != 0) {
            *(void*)(*this_ptr + lVar4 * 8) = arg1;
          }
          goto LAB_00c8dc0a;
        }
        uVar10 = *(uint *)(this_ptr + 1);
        if (((param_1 & (int)uVar10 < 0x3fffffdd) != 1) ||
           (*(int *)((int64_t)this_ptr + 0xc) * 2 + 2 <= (int)uVar10)) {
          uVar9 = (int64_t)(iVar7 + 1) % (int64_t)(int)uVar10 & 0xffffffff;
          goto LAB_00c8dea6;
        }
        uVar11 = 0x17;
        if ((((((0x16 < (int)uVar10) && (uVar11 = 0x35, 0x34 < (int)uVar10)) &&
              (uVar11 = 0x65, 100 < (int)uVar10)) &&
             (((uVar11 = 0xfb, 0xfa < (int)uVar10 && (uVar11 = 0x1fd, 0x1fc < (int)uVar10)) &&
              ((uVar11 = 0x3fd, 0x3fc < (int)uVar10 &&
               ((uVar11 = 0x7f7, 0x7f6 < (int)uVar10 && (uVar11 = 0xffd, 0xffc < (int)uVar10))))))))
            && ((uVar11 = 0x1fff, 0x1ffe < (int)uVar10 &&
                (((((uVar11 = 0x3ffd, 0x3ffc < (int)uVar10 &&
                    (uVar11 = 0x7fed, 0x7fec < (int)uVar10)) &&
                   (uVar11 = 0xfff1, 0xfff0 < (int)uVar10)) &&
                  ((uVar11 = 0x1ffff, 0x1fffe < (int)uVar10 &&
                   (uVar11 = 0x3fffb, 0x3fffa < (int)uVar10)))) &&
                 ((uVar11 = 0x7ffff, 0x7fffe < (int)uVar10 &&
                  ((uVar11 = 0xffffd, 0xffffc < (int)uVar10 &&
                   (uVar11 = 0x1ffff7, 0x1ffff6 < (int)uVar10)))))))))) &&
           ((uVar11 = 0x3ffffd, 0x3ffffc < (int)uVar10 &&
            (((((uVar11 = 0x7ffff1, 0x7ffff0 < (int)uVar10 &&
                (uVar11 = 0xfffffd, 0xfffffc < (int)uVar10)) &&
               (uVar11 = 0x1ffffd9, 0x1ffffd8 < (int)uVar10)) &&
              ((uVar11 = 0x3fffffb, 0x3fffffa < (int)uVar10 &&
               (uVar11 = 0x7ffffd9, 0x7ffffd8 < (int)uVar10)))) &&
             (uVar11 = 0xfffffc7, 0xfffffc6 < (int)uVar10)))))) {
          uVar11 = 0x3fffffdd;
          if ((int)uVar10 < 0x1ffffffd) {
            uVar11 = 0x1ffffffd;
          }
          if (uVar10 == uVar11) goto LAB_00c8de90;
        }
        lVar8 = *this_ptr;
        *(uint *)(this_ptr + 1) = uVar11;
        *(void*)((int64_t)this_ptr + 0xc) = 0;
        lVar4 = (**(code **)this_ptr[4])();
        *this_ptr = lVar4;
        if (0 < (int)uVar10) {
          uVar9 = 0;
          do {
            if (*(int64_t *)(lVar8 + uVar9 * 8) != 0) {
              FUN_00c8d640(1);
            }
            uVar9 = uVar9 + 1;
          } while (uVar10 != uVar9);
        }
        (**(code **)(this_ptr[4] + 0x10))();
LAB_00c8de90:
        uVar9 = (*this_ptr[2])();
        uVar9 = (uVar9 & 0xffffffff) % (uint64_t)*(uint *)(this_ptr + 1);
LAB_00c8dea6:
        lVar8 = *this_ptr;
        lVar4 = (int64_t)(int)uVar9;
        if (*(int64_t *)(lVar8 + lVar4 * 8) != 0) {
          while( true ) {
            cVar3 = (*this_ptr[3])();
            if (cVar3 != '\0') {
              uVar6 = *(void*)(*this_ptr + lVar4 * 8);
              if ((param_2 & 1) != 0) {
                *(void*)(*this_ptr + lVar4 * 8) = arg1;
              }
              goto LAB_00c8dc0a;
            }
            uVar9 = (int64_t)((int)uVar9 + 1) % (int64_t)(int)this_ptr[1];
            lVar8 = *this_ptr;
            lVar4 = (int64_t)(int)uVar9;
            if (*(int64_t *)(lVar8 + lVar4 * 8) == 0) break;
            uVar9 = uVar9 & 0xffffffff;
          }
        }
LAB_00c8dbfa:
        *(void*)(lVar8 + lVar4 * 8) = arg1;
        *(int *)((int64_t)this_ptr + 0xc) = *(int *)((int64_t)this_ptr + 0xc) + 1;
        uVar6 = 0;
        goto LAB_00c8dc0a;
      }
      if (((param_1 & (int)uVar10 < 0x3fffffdd) != 1) ||
         (*(int *)((int64_t)this_ptr + 0xc) * 2 + 2 <= (int)uVar10)) goto LAB_00c8dbfa;
      uVar11 = 0x17;
      if (((((0x16 < (int)uVar10) && (uVar11 = 0x35, 0x34 < (int)uVar10)) &&
           (uVar11 = 0x65, 100 < (int)uVar10)) &&
          ((((uVar11 = 0xfb, 0xfa < (int)uVar10 && (uVar11 = 0x1fd, 0x1fc < (int)uVar10)) &&
            ((uVar11 = 0x3fd, 0x3fc < (int)uVar10 &&
             ((uVar11 = 0x7f7, 0x7f6 < (int)uVar10 && (uVar11 = 0xffd, 0xffc < (int)uVar10)))))) &&
           ((uVar11 = 0x1fff, 0x1ffe < (int)uVar10 &&
            (((uVar11 = 0x3ffd, 0x3ffc < (int)uVar10 && (uVar11 = 0x7fed, 0x7fec < (int)uVar10)) &&
             (uVar11 = 0xfff1, 0xfff0 < (int)uVar10)))))))) &&
         ((((uVar11 = 0x1ffff, 0x1fffe < (int)uVar10 && (uVar11 = 0x3fffb, 0x3fffa < (int)uVar10))
           && (((uVar11 = 0x7ffff, 0x7fffe < (int)uVar10 &&
                ((uVar11 = 0xffffd, 0xffffc < (int)uVar10 &&
                 (uVar11 = 0x1ffff7, 0x1ffff6 < (int)uVar10)))) &&
               (uVar11 = 0x3ffffd, 0x3ffffc < (int)uVar10)))) &&
          (((((uVar11 = 0x7ffff1, 0x7ffff0 < (int)uVar10 &&
              (uVar11 = 0xfffffd, 0xfffffc < (int)uVar10)) &&
             (uVar11 = 0x1ffffd9, 0x1ffffd8 < (int)uVar10)) &&
            ((uVar11 = 0x3fffffb, 0x3fffffa < (int)uVar10 &&
             (uVar11 = 0x7ffffd9, 0x7ffffd8 < (int)uVar10)))) &&
           (uVar11 = 0xfffffc7, 0xfffffc6 < (int)uVar10)))))) {
        uVar11 = 0x3fffffdd;
        if ((int)uVar10 < 0x1ffffffd) {
          uVar11 = 0x1ffffffd;
        }
        param_2 = 0;
        param_1 = 0;
        bVar2 = true;
        if (uVar10 == uVar11) goto LAB_00c8d682;
      }
      *(uint *)(this_ptr + 1) = uVar11;
      *(void*)((int64_t)this_ptr + 0xc) = 0;
      lVar4 = (**(code **)this_ptr[4])();
      *this_ptr = lVar4;
      if (0 < (int)uVar10) {
        uVar9 = 0;
        do {
          if (*(int64_t *)(lVar8 + uVar9 * 8) != 0) {
            FUN_00c8d640(1);
          }
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
      (**(code **)(this_ptr[4] + 0x10))();
      param_2 = 0;
      param_1 = 0;
      bVar2 = true;
      goto LAB_00c8d682;
    }
    iVar7 = *(int *)((int64_t)this_ptr + 0xc);
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        cVar3 = (*this_ptr[3])();
        if (cVar3 != '\0') {
          uVar6 = *(void*)(*this_ptr + lVar8 * 8);
          if ((param_2 & 1) != 0) {
            *(void*)(*this_ptr + lVar8 * 8) = arg1;
          }
          goto LAB_00c8dc0a;
        }
        lVar8 = lVar8 + 1;
        iVar7 = *(int *)((int64_t)this_ptr + 0xc);
      } while (lVar8 < iVar7);
      uVar10 = *(uint *)(this_ptr + 1);
    }
    if (iVar7 < (int)uVar10) goto LAB_00c8dbc8;
    uVar11 = 0x17;
    if ((((((((0x16 < (int)uVar10) && (uVar11 = 0x35, 0x34 < (int)uVar10)) &&
            ((uVar11 = 0x65, 100 < (int)uVar10 &&
             (((uVar11 = 0xfb, 0xfa < (int)uVar10 && (uVar11 = 0x1fd, 0x1fc < (int)uVar10)) &&
              (uVar11 = 0x3fd, 0x3fc < (int)uVar10)))))) &&
           ((uVar11 = 0x7f7, 0x7f6 < (int)uVar10 && (uVar11 = 0xffd, 0xffc < (int)uVar10)))) &&
          (uVar11 = 0x1fff, 0x1ffe < (int)uVar10)) &&
         (((uVar11 = 0x3ffd, 0x3ffc < (int)uVar10 && (uVar11 = 0x7fed, 0x7fec < (int)uVar10)) &&
          ((uVar11 = 0xfff1, 0xfff0 < (int)uVar10 &&
           (((uVar11 = 0x1ffff, 0x1fffe < (int)uVar10 && (uVar11 = 0x3fffb, 0x3fffa < (int)uVar10))
            && (uVar11 = 0x7ffff, 0x7fffe < (int)uVar10)))))))) &&
        ((uVar11 = 0xffffd, 0xffffc < (int)uVar10 && (uVar11 = 0x1ffff7, 0x1ffff6 < (int)uVar10))))
       && ((uVar11 = 0x3ffffd, 0x3ffffc < (int)uVar10 &&
           (((uVar11 = 0x7ffff1, 0x7ffff0 < (int)uVar10 &&
             (uVar11 = 0xfffffd, 0xfffffc < (int)uVar10)) &&
            ((uVar11 = 0x1ffffd9, 0x1ffffd8 < (int)uVar10 &&
             (((uVar11 = 0x3fffffb, 0x3fffffa < (int)uVar10 &&
               (uVar11 = 0x7ffffd9, 0x7ffffd8 < (int)uVar10)) &&
              (uVar11 = 0xfffffc7, 0xfffffc6 < (int)uVar10)))))))))) {
      uVar11 = 0x3fffffdd;
      if ((int)uVar10 < 0x1ffffffd) {
        uVar11 = 0x1ffffffd;
      }
      param_2 = 0;
      param_1 = 0;
      bVar2 = true;
      if (uVar10 == uVar11) goto LAB_00c8d682;
    }
    lVar8 = *this_ptr;
    *(uint *)(this_ptr + 1) = uVar11;
    *(void*)((int64_t)this_ptr + 0xc) = 0;
    lVar4 = (**(code **)this_ptr[4])();
    *this_ptr = lVar4;
    if (0 < (int)uVar10) {
      uVar9 = 0;
      do {
        if (*(int64_t *)(lVar8 + uVar9 * 8) != 0) {
          FUN_00c8d640(1);
        }
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    (**(code **)(this_ptr[4] + 0x10))();
    param_2 = 0;
    param_1 = 0;
    bVar2 = true;
    if (uVar11 < 0x35) {
      iVar7 = *(int *)((int64_t)this_ptr + 0xc);
LAB_00c8dbc8:
      *(void*)(*this_ptr + (int64_t)iVar7 * 8) = arg1;
      *(int *)((int64_t)this_ptr + 0xc) = iVar7 + 1;
      uVar6 = 0;
LAB_00c8dc0a:
      uVar5 = 0;
      if (!bVar1) {
        uVar5 = uVar6;
      }
      return uVar5;
    }
  } while( true );
}

